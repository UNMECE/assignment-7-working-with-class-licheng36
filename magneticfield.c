#include <iostream>
#include <cmath>


class Magnetic_Field {
private:
    double *B; 

		public:
				Magnetic_Field() {
					B = new double[3]; 
					B[0]=0.0;
					B[1]=0.0;
					B[2]=0.0;
				}

				Magnetic_Field(double Bx, double By, double Bz){
					B = new double[3];
					B[0]=Bx;
					B[1]=By;
					B[2]=Bz;
				}
			
				~Magnetic_Field() {
				delete[] B; 
				}
				
				double getX() const { return B[0]; }
				double getY() const { return B[1]; }
				double getZ() const { return B[2]; }
				
				void setX(double Bx) { B[0] = Bx; }
				void setY(double By) { B[1] = By; }
				void setZ(double Bz) { B[2] = Bz; }
				
				double calculateMagnitude() const {
				return std::sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
				}
				
				void calculateUnitVector() const {
						double magnitude = calculateMagnitude();
						if (magnitude != 0) {
						std::cout << "Unit Vector: (" << B[0] / magnitude << ", " << B[1] / magnitude << ", " << B[2] / magnitude << ")" << std::endl;
						} else {
										std::cout << "Unit Vector: (0, 0, 0)" << std::endl;
						}
				}
				
				void print() const {
					std::cout << "Magnetic Field: (" << B[0] << ", " << B[1] << ", " << B[2] << ")" << std::endl;
					std::cout << "Magnitude: " << calculateMagnitude() << std::endl;
					calculateUnitVector();
				}
};				
