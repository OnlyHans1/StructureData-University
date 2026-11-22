#include "MLL(1).h"

void createListParent(ListParent &L){
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmptyParent(ListParent L){
    if (L.first == nullptr){
        return true;
    } else {
        return false;
    }
}

bool isEmptyChild(address_parent p){
    if (p -> firstChild == nullptr){
        return true;
    } else {
        return false;
    }
}

//Parent
address_parent createParent(string id, string jabatan, string namaPejabat){
    address p = new elmParent;

    p -> info.id = id;
    p -> info.jabatan = jabatan;
    p -> info.namaPejabat = namaPejabat;
    p -> next = nullptr;
    p -> prev = nullptr;
    p -> firstChild = nullptr;

    return p;
}

void insertParent(ListParent &L, address_parent p);

address_parent findParent(ListParent L, string id);

void deleteParent(ListParent &L, string id);

void printParent(ListParent L);

//Child
address_child createChild(String id, string jabatan, string namaBawahan){
    address_child q = new elmChild;

    q -> info.id = id;
    q -> info.jabatan = jabatan;
    q -> info.namaBawahan = namaBawahan;
    q -> next = nullptr;

    return q;
}

void insertChild(address_parent p, address_child q);

address_child findChild(address_parent p, string id);

void deleteChild(address_parent p, string id);

void printChild(address_parent p);

void printAll(ListParent L);
