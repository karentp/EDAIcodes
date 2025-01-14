#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Encapsulacion
class Product {
private:
    int id;
    string name;
    double price;
    int stock;

public:
    Product(int productId, string productName, double productPrice, int productStock) 
        : id(productId), name(productName), price(productPrice), stock(productStock) {}

    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    int getStock() const {
        return stock;
    }

    bool updateStock(int quantity) {
        if (stock >= quantity) {
            stock -= quantity;
            return true;
        } else {
            return false;
        }
    }

    void displayProduct() const {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << ", Stock: " << stock << endl;
    }
};

//Encapsulacion y abstraccion 
class Order {
private:
    int orderId;
    vector<pair<Product, int>> products;
    double totalPrice;

public:
    Order(int id) : orderId(id), totalPrice(0) {}

    void addProduct(Product &product, int quantity) {
        if (product.updateStock(quantity)) {
            products.push_back({product, quantity});
            totalPrice += product.getPrice() * quantity;
        } else {
            cout << "Not enough stock for " << product.getName() << "!" << endl;
        }
    }

    void displayOrder() const {
        cout << "Order ID: " << orderId << endl;
        for (auto &p : products) {
            cout << p.first.getName() << " - " << p.second << " units" << endl;
        }
        cout << "Total Price: $" << totalPrice << endl;
    }
};

// encapsulacion y modularizacon
class Inventory {
private:
    vector<Product> products;

public:
    void addProduct(const Product &product) {
        products.push_back(product);
    }

    void displayInventory() const {
        cout << "Inventory:" << endl;
        for (auto &product : products) {
            product.displayProduct();
        }
    }

    void lowStockReport() const {
        cout << "Low Stock Products (less than 5 units):" << endl;
        for (auto &product : products) {
            if (product.getStock() < 5) {
                product.displayProduct();
            }
        }
    }
};

int main() {
    Inventory inventory;
    inventory.addProduct(Product(1, "Laptop", 1500, 10));
    inventory.addProduct(Product(2, "Phone", 800, 3));
    inventory.addProduct(Product(3, "Headphones", 100, 20));

    inventory.displayInventory();

    Order order(101);
    order.addProduct(inventory.products[0], 2); // Ordering 2 Laptops
    order.addProduct(inventory.products[1], 4); // Ordering 4 Phones (should display insufficient stock)
    order.displayOrder();

    inventory.displayInventory();
    inventory.lowStockReport();

    return 0;
}
