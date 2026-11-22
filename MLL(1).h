#ifndef MLL(1)_H_INCLUDED
#define MLL(1)_H_INCLUDED

#include <iostream>

using namespace std;

typedef struct elmParent *address_parent;
typedef struct elmChild *address_child;

struct Parent {
    string id;
    string jabatan;
    string namaPejabat;
};

struct Child {
    string id;
    string jabaran;
    string namaBawahan;
};

struct elmParent {
    Parent info;
    address_parent next;
    address_parent prev;
    address_child firstChild;
};

struct elmChild {
    Child info;
    address_child next;
};

struct ListParent {
    address_parent first;
    address_parent last;
};

void createListParent(ListParent &L);

bool isEmptyParent(ListParent L);

bool isEmptyChild(address_parent p);

//Parent
address_parent createParent(string id, string jabatan, string namaPejabat);

void insertParent(ListParent &L, address_parent p);

address_parent findParent(ListParent L, string id);

void deleteParent(ListParent &L, string id);

void printParent(ListParent L);

//Child
address_child createChild(String id, string jabatan, string namaBawahan);

void insertChild(address_parent p, address_child q);

address_child findChild(address_parent p, string id);

void deleteChild(address_parent p, string id);

void printChild(address_parent p);

void printAll(ListParent L);


#endif // MLL(1)_H_INCLUDED
