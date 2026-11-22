#include "MLL(2).h"

//Rektor List 1
void createListRektor(ListRektor &L);

address_rektor createParentRektor(string id, string nama, string periode);

void insertParentRektor(ListRektor &L, address_rektor p);

address_rektor findParentRektor(ListRektor L, string id);

void deleteParentRektor(ListRektor &L, string id);

void printParentRektor(ListRektor L);

//Warek
address_warek createChildWarek(string id, string nama, string bidang);

void insertChildWarek(address_rektor p, address_warek q);

address_warek findChildWarek(address_rektor p, string id);

void deleteChildWarek(address_rektor p, string id);

void printChildWarek(address_rektor p);

//Dekan List 2
void createListDekan(ListDekan &L);

address_dekan createParentDekan(string id, string nama, string fakultas);

void insertParentDekan(ListDekan &L, address_dekan p);

address_dekan findParentDekan(ListDekan L, string id);

void deleteParentDekan(ListDekan &L, string id);

void printParentDekan(ListDekan L);

//Kaprodi
address_kaprodi createChildKaprodi(string id, string nama, string prodi);

void insertChildKaprodi(address_dekan p, address_kaprodi q);

address_kaprodi findChildKaprodi(address_dekan p, string id);

void deleteChildKaprodi(address_dekan p, string id);

void printChildKaprodi(address_dekan p);

//Korlab
address_korlab createChildKorlab(string id, string nama, string namaLab);

void insertChildKorlab(address_dekan p, address_korlab q);

address_korlab findChildKalab(address_dekan p, string id);

void deleteChildKorlab(address_dekan p, string id);

void printChildKorlab(address_dekan p);

//Dosen List 3
void createListDosen(ListDosen &L);

address_dosen createParentDosen(string id, string nama, string kodeDosen);

void insertParentDosen(ListDosen &L, address_dosen p);

address_dosen findParentDosen(ListDosen L, string id);

void deleteParentDosen(ListDosen &L, string id);

void printParentDosen(ListDosen L);

//Aslab
address_aslab createChildAslab(string id, string nama, string nim);

void insertChildAslab(address_dosen p, address_aslab q);

address_aslab findChildAslab(address_dosen p, string id);

void deleteChildAslab(address_dosen p, string id);

void printChildAslab(address_dosen p);

//Asprak
address_asprak createChildAsprak(string id, string nama, string kodeAsprak);

void insertChildAsprak(address_dosen p, address_asprak q);

address_asprak findChildAsprak(address_dosen p, string id);

void deleteChildAsprak(address_dosen p, string id);

void printChildAsprak(address_dosen p);

//Semua List
void printAll(ListRektor LR, ListDekan LD, ListDosen LD);
