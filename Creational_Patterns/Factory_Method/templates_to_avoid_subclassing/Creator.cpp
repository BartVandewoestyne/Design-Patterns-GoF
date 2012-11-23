class Product {};


class MyProduct : public Product {
public:
    MyProduct();
    // ...
};


class Creator {
public:
    virtual Product* CreateProduct() = 0;
};


template <class TheProduct>
class StandardCreator: public Creator {
public:
    virtual Product* CreateProduct();
};

template <class TheProduct>
Product* StandardCreator<TheProduct>::CreateProduct () {
    return new TheProduct;
}


StandardCreator<MyProduct> myCreator;
