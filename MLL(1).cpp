#include "MLL(1).h"

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
