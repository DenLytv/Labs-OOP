using System;

namespace MathLibrary {
    public class MathFunc {
        public ulong factorial(int num) {
            ulong fact = 1;
            for (uint i = 1; i <= num; ++i) {
                fact *= i;
            }
            return fact;
        }

        public double taylor(double x, int n) {
            double result = 0.0;
            for (int i = 0; i < n; ++i) {
                result += Math.Pow(-1, i) / factorial(2 * i) * Math.Pow(x, 2 * i);
            }
            return result;
        }

        public double calcTriangleArea(double a, double b) {
            return 0.5 * a * b;
        }
    }
}