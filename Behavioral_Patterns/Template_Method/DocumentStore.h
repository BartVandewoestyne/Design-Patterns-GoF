#ifndef DOCUMENT_STORE_H
#define DOCUMENT_STORE_H

class Document;

class DocumentStore {
public:
    void AddDocument(const Document* doc);
};

#endif  // DOCUMENT_STORE_H
