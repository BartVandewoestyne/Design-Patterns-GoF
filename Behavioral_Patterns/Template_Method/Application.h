#ifndef APPLICATION_H
#define APPLICATION_H

class Document;
class DocumentStore;

class Application {
public:
    Application();
    virtual ~Application();

    void AddDocument();
    void OpenDocument(const char* name);

    virtual Document* DoCreateDocument();
    virtual bool CanOpenDocument(const char* name);
    virtual void AboutToOpenDocument(const Document* doc);
private:
    DocumentStore* _docs;
};

#endif  // APPLICATION_H
