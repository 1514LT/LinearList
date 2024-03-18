#include "Base.hpp"
#include "Link.hpp"
int main(int argc, char const *argv[])
{
  Link *link;
  link = link->Init(link,5);
  link->setHeader(link);
  link->ScanfLink(link->getHeader());
  // link->headInsert(link->getHeader(),8);
  link->Insert(link->getHeader(),8,4);
  link->Insert(link->getHeader(),20,4);
  link->Insert(link->getHeader(),54,3);
  link->Insert(link->getHeader(),7,0);
  link->Insert(link->getHeader(),66,4);
  printf("排序前:\n");
  link->ScanfLink(link->getHeader());
  // link->setHeader(link->ReversalLink(link->getHeader()));
  // link->ScanfLink(link->getHeader());
  // link->FindNum(link->getHeader(),0);
  link->SortLink(link->getHeader());
  printf("排序后:\n");
  link->ScanfLink(link->getHeader());
  link->deletLink(link->getHeader(),0);
  printf("删除后:\n");
  link->ScanfLink(link->getHeader());
  link->deletLink(link->getHeader());

  return 0;
}
