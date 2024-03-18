#include "Link.hpp"
Link::Link() {}

Link::~Link()
{
}

Link::Link(int num)
{
  this->num = num;
  this->next = NULL;
}
void Link::setNum(int num)
{
  this->num = num;
}
int Link::getNum()
{
  return this->num;
}
void Link::setNext(Link *next)
{
  this->next = next;
}
Link *Link::getNext()
{
  return this->next;
}
Link *Link::Init(Link *head, int count)
{
  int i = 0;
  if (count <= 0)
  {
    return NULL;
  }
  head = new Link(i);
  Link *p = head;
  for (i = 1; i < count; i++)
  {
    head->setNext(new Link(i));
    head = head->getNext();
  }
  head = p;
  return head;
}
int Link::ScanfLink(Link *head)
{
  int count = 0;
  while (head != NULL)
  {
    printf("num:%d\n", head->getNum());
    head = head->getNext();
    count++;
  }
  return count;
}
void Link::setHeader(Link *head)
{
  this->head = head;
}
Link *Link::getHeader()
{
  return this->head;
}
void Link::deletLink(Link *head)
{
  while (head != NULL)
  {
    Link *p = head;
    head = head->getNext();
    printf("delete node :%d\n", p->getNum());
    delete p;
  }
}
void Link::deletLink(Link* head,int num)
{
  Link* current =head;
  Link* pre = NULL;
  while (current != NULL)
  {
    if(current->getNum() == num)
    {
      if(pre!=NULL)
      {
        pre->setNext(current->getNext());
      }
      else
      {
        this->head =current->getNext();
      }
      delete current;
      break;
    }
    pre = current;
    current = current->getNext();
  }
  
}
Link *Link::ReversalLink(Link *head)
{
  Link *curr = head;
  Link *pre = NULL;
  Link *next = NULL;
  while (curr != NULL)
  {
    next = curr->getNext();
    curr->setNext(pre);
    pre = curr;
    curr = next;
  }
  return pre;
}

int Link::FindNum(Link *head, int num)
{
  int count = 0;
  Link *curent = head;
  while (curent != NULL)
  {
    if (curent->getNum() == num)
    {
      printf("找到%d,index:%d\n", num, count);
      return count;
    }
    printf("num:%d\n", curent->getNum());
    curent = curent->getNext();
    count++;
  }
  printf("没有找到%d", num);
  return -1;
}

bool Link::headInsert(Link *head, int num)
{
  Link *curent = head;
  Link *value = new Link();
  value->setNum(num);
  value->setNext(curent);
  this->head = value;
  return true;
}
bool Link::Insert(Link *head, int num, int index)
{
  if (index < 0)
    return false;
  int count = 0;
  Link *curent = head;
  while (curent != NULL)
  {
    if (count == index)
    {
      break;
    }
    curent = curent->getNext();
    count++;
  }
  if (curent == NULL)
  {
    printf("out of index\n");
    return false;
  }
  Link *value = new Link();
  value->setNum(num);
  // 尾部插入
  if (curent->getNext() == NULL)
  {
    curent->setNext(value);
    value->setNext(NULL);
  }
  // 中间插入
  else
  {
    value->setNext(curent->getNext());
    curent->setNext(value);
  }
  return true;
}

void Link::SortLink(Link *head)
{
  if (head == NULL || head->getNext() == NULL)
    return;

  Link *i = head;
  Link *pre = NULL;
  while (i->getNext() != NULL)
  {
    Link *j = head;
    Link *pre = NULL;
    while (j->getNext() != NULL)
    {
      Link *current = j;
      Link *next = j->getNext();
      if (current->getNum() > next->getNum())
      {
        current->setNext(next->getNext());

        if (pre != NULL)
        {
          pre->setNext(next);
        }
        else
        {
          head = next;
        }

        next->setNext(current);
        j = next;
      }

      pre = j;
      j = j->getNext();
    }

    i = i->getNext();
  }
}