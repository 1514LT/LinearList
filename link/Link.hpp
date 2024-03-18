#include "Base.hpp"

class Link
{
private:
  int num;
  Link* next;
  Link* head;
public:
  Link();
  Link(int num);
  ~Link();

public:
  void setNum(int num);
  int getNum();
  void setNext(Link* next);
  Link* getNext();
  void setHeader(Link* head);
  Link* getHeader();
  void deletLink(Link* head);
  void deletLink(Link* head,int num);
  Link* Init(Link* head, int count);
  int ScanfLink(Link* head);
  Link* ReversalLink(Link* head);
  int FindNum(Link* head,int num);
  bool headInsert(Link* head,int num);
  bool Insert(Link* head,int num,int index);
  void SortLink(Link* head);
};


