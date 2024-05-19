#include "creator.h"
#include "product.h"

Product* Creator::GetProduct() {
    if (_product == nullptr) {
        _product = CreateProduct();
    }
    return _product;
}

