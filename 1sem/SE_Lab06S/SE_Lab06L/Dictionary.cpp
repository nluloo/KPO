#include "Dictionary.h"

Dictionary::Instance Dictionary::Create(const char name[DICTNAMEMASSIZE], int size)
{
    if (strlen(name) > DICTNAMEMASSIZE)        throw THROW01;
    if (size > DICCTMAXSIZE)        throw THROW02;
    Instance dis;
    dis.maxsize = size;
    dis.size = 0;
    dis.dictionary = new Entry[size];

    int i = 0;
    for (; name[i] != '\0'; i++) {
        dis.name[i] = name[i];
    }
    dis.name[i] = '\0';
    return dis;

}

void Dictionary::AddEntry(Instance& inst, Entry ed)
{
    if (inst.size + 1 > inst.maxsize)       throw THROW03;
    for (int i = 0; i < inst.size; ++i) {
        if (inst.dictionary[i].id == ed.id)            throw THROW04;
    }
    inst.dictionary[inst.size++] = ed;
}

void Dictionary::DelEntry(Instance& inst, int id)
{
    int index = -1;
    for (int i = 0; i < inst.size; ++i) {
        if (inst.dictionary[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1)        throw THROW06;
    for (int i = index; i < inst.size - 1; ++i) {
        inst.dictionary[i] = inst.dictionary[i + 1];
    }
    inst.size--;
}

void Dictionary::UpdEntry(Instance& inst, int id, Entry new_ed)
{
    for (int i = 0; i < inst.size; ++i) {
        if (inst.dictionary[i].id == new_ed.id && id != new_ed.id)            throw THROW08;
    }
    for (int i = 0; i < inst.size; ++i) {
        if (inst.dictionary[i].id == id) {
            inst.dictionary[i] = new_ed;
            return;
        }
    }
    throw THROW07;
}

Dictionary::Entry Dictionary::GetEntry(Instance inst, int id)
{
    Instance* pinst = &inst;

    for (int i = 0; i < pinst->size; ++i) {
        if (pinst->dictionary[i].id == id) {
            return pinst->dictionary[i];
        }
    }
    throw THROW05;
}

void Dictionary::Print(Instance d)
{
    std::cout << std::setfill('-') << std::setw(9) << '-' << d.name << std::setw(11) << '-' << std::endl;
    for (int i = 0; i < d.size; i++) {
        std::cout << d.dictionary[i].id << ' ' << d.dictionary[i].name << std::endl;
    }

}

void Dictionary::Delete(Instance& d)
{
    delete d.dictionary;
    d.dictionary = nullptr;
}

