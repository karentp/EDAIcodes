class Rectangulo {
    int largo;
    int ancho;
public:
    Rectangulo(int l, int a) {
        largo = l;
        ancho = a;
    }
    void print() {
        cout << "Largo: " << largo << ", Ancho: " << ancho << endl;
    }
};

int main() {
    Rectangulo* r = new Rectangulo();
    r->print();
    return 0;
}
