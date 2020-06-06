#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>

#include "Point.hpp"

class Matrix
{
private:
public:
    int row, col;
    std::vector<std::vector<bool>> mat;

    Matrix();
    Matrix(int, int);

    // methods
    std::pair<int, int> getDimention();   // returns {row, col}
    bool isIntersecting(Point, Matrix &); // checks the provided matrix is intersecting or not if it is placed in Point
    void addRow();                        // add a new row
};

#endif // MATRIX_HPP