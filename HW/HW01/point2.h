
#ifndef Point2_h
#define Point2_h

class Point2 {

	public:
		/*Constructer for generic point*/
		Point2();
		/*Constructer for point with passed coordinates*/
		Point2(float x, float y);
		/*Finds the distance between this point and a passed point*/
		float DistanceBetween(Point2 point);
		/*get the x coordinate*/
		float get_x_coord();
		/*get the y coordinate*/
		float get_y_coord();

	private:
		float x_coord;
		float y_coord;
};

#endif //Point2
