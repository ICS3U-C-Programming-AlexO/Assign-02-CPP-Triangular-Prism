// Copyright (c) 2026 Alex O'Brien All rights reserved
// .
// Created by: Alex OBrien
// Date: Oct 13, 2026
// This program asks the user for measurements of a
// triangular prism and then calculates
// the surface area and volume.

#include <iomanip>
#include <iostream>

int main() {
    float b, h;
    float s1, s2, s3;
    float L;

    // Prompt the user for the triangular base dimensions
    std::cout << "Enter the base of the triangle (b): ";
    std::cin >> b;

    std::cout << "Enter the height of the triangle (h): ";
    std::cin >> h;

    // Prompt the user for all three side lengths of the triangle
    std::cout << "Enter side 1 length of the triangle: ";
    std::cin >> s1;

    std::cout << "Enter side 2 length of the triangle: ";
    std::cin >> s2;

    std::cout << "Enter side 3 length of the triangle: ";
    std::cin >> s3;

    // Prompt the user for the length of the prism
    std::cout << "Enter the length of the prism (L): ";
    std::cin >> L;

    // Calculate the volume & SA
    float base_area = 0.5f * b * h;
    float volume = base_area * L;
    float surface_area = b * h + (s1 + s2 + s3) * L;

    // Show the results to user
    std::cout << "\n--- Results ---\n";
    std::cout << "Volume: " << volume << " cubic units\n";
    std::cout << "Surface Area: " << surface_area << " square units\n";
}