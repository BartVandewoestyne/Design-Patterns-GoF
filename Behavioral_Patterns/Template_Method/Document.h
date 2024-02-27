#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document {
public:
    void Save();
    void Open();
    void Close();
    virtual void DoRead();
};

#endif  // DOCUMENT_H
