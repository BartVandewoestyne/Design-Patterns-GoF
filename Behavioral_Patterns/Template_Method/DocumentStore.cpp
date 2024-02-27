#include "DocumentStore.h"

#include <iostream>

void DocumentStore::AddDocument(const Document* doc) {
    std::cout << "Adding document " << doc << " to the document store." << std::endl;
}
