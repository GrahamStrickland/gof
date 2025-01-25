#ifndef CREATOR_H
#define CREATOR_H

class Product;

class Creator {
public:
  virtual Product *GetProduct();

protected:
  virtual Product *CreateProduct();

private:
  Product *_product;
};
#endif // CREATOR_H
