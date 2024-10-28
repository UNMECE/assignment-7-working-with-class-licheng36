#include <iostream>
#include <cmath>

class Electric_Field {
private:
    double *E; 
		
public: 	
	
  	Electric_Field() {
	  E = new double[3];
		E[0]=0.0;
		E[1]=0.0;
		E[2]=0.0;
		}

		Electric_Field(double Ex,double Ey, double Ez){
		E = new double[3]; 
		E[0]=Ex;
		E[1]=Ey;
		E[2]=Ez;
		}
		
		~Electric_Field() {
		delete[] E; 
		}

		double getX() const { return E[0]; }
		double getY() const { return E[1]; }
		double getZ() const { return E[2]; }

		void setX(double Ex) { E[0] = Ex; }
		void setY(double Ey) { E[1] = Ey; }
		void setZ(double Ez) { E[2] = Ez; }
		
		double calculateMagnitude() const {
		return std::sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
		}

		double calculateInnerProduct() const {
		return E[0] * E[0] + E[1] * E[1] + E[2] * E[2];
		}
			
		void print() const {
		std::cout << "Electric Field: (" << E[0] << ", " << E[1] << ", " << E[2] << ")" << std::endl;
		std::cout << "Magnitude: " << calculateMagnitude() << std::endl;
		std::cout << "Inner Product: " << calculateInnerProduct() << std::endl;
		}
		};
