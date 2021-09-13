// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This is the "circle" program, with proper style

#include <iostream>
#include <cmath>

int main() {
  // This function calculate the area and perimeter of circle

  std::cout << "A radius with dimensions 15 mm." << std::endl;
  std::cout << "Calculate the area and perimeter of circle." << std::endl;
  std::cout << "" << std::endl;
  std::cout << "a = πr2 = " << (M_PI * pow(15, 2)) << " mm²" << std::endl;
  std::cout << "p = 2πr = " << (2 * M_PI * 15) << " mm" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "Done" << std::endl;
}
