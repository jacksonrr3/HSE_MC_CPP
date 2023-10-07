#include <matrix.h>

int main() {
    Matrix a(5, 5);

    for (size_t r = 0; r < a.getRows(); ++r) {
        for (size_t c = 0; c < a.getCols(); ++c) {
            size_t idx = r * a.getRows() + c;
            a.at(r, c) = idx * 10;
        }
    }

    // a.print();

    Matrix b(a);
    // b.print();

    Matrix c(0, 0);
    c = b;

    // c.print();
    Matrix d = c.multiply(10);
    // d.print();

    Matrix e = d.subtract(1);
    // e.print();

    Matrix g = e.add(1);
    // g.print();
}
