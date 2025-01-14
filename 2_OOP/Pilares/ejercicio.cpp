#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Faulty Product class with public attributes
class Product {
public:
    int id;
    string name;
    double price;
    int stock;
};

// Faulty Order class with public attributes
class Order {
public:
    vector<Product> products;
    double total_price;

    void addProduct(Product &product, int quantity) {
        if (quantity > product.stock) {
            cout << "Not enough stock!" << endl;
        } else {
            products.push_back(product);
            total_price += product.price * quantity;
            product.stock -= quantity;
        }
    }

    void displayOrder() {
        for (auto &product : products) {
            cout << product.name << " - " << product.price << endl;
        }
        cout << "Total Price: " << total_price << endl;
    }
};

// Faulty Inventory class
class Inventory {
public:
    vector<Product> products;

    void addProduct(Product product) {
        products.push_back(product);
    }

    void displayInventory() {
        for (auto &product : products) {
            cout << product.name << " - " << product.price << " - Stock: " << product.stock << endl;
        }
    }
};
