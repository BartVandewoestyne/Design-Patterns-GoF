#include "Application.h"

#include "Document.h"
#include "DocumentStore.h"

#include <iostream>

Application::Application() {
    _docs = new DocumentStore;
}

Application::~Application() {
    delete _docs;
}

void Application::AddDocument() {
    std::cout << "Adding document to application." << std::endl;
}

void Application::OpenDocument(const char* name) {
    if (!CanOpenDocument(name)) {
        // cannot handle this document
        return;
    }

    Document* doc = DoCreateDocument();

    if (doc) {
        _docs->AddDocument(doc);
        AboutToOpenDocument(doc);
        doc->Open();
        doc->DoRead();
    }
}

Document* Application::DoCreateDocument() {
    std::cout << "Creating a document." << std::endl;
    Document* doc = new Document;
    return doc;
}

bool Application::CanOpenDocument(const char* name) {
    std::cout << "Checking whether we can open document " << name << "." << std::endl;
    return true;
}

void Application::AboutToOpenDocument(const Document* doc) {
    std::cout << "About to open document " << doc << "." << std::endl;
}
