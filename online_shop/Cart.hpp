
#ifndef _CART_HPP_
#include "Product.hpp"
#include <vector>
#include <iomanip>
#include <ios>

class Cart
{
private:
	vector<Product> items;
public:
	void addToCart(Product);
	void removeFromCart(char*);
	double getTotal();
	int displayCart();
};

#endif // !_CART_HPP_