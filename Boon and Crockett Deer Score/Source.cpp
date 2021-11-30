#include <iostream>
using namespace std;

//Typical Whitetail and Coues' deer

/*All measurements must be made with a 1/4‑inch wide flexible steel tape to the nearest one‑eighth of an inch. (Note: A flexible steel cable can be 
used to measure points and main beams only.)  Enter fractional figures in eighths, without reduction.  Official measurements cannot be taken until 
the antlers have air dried at a habitable room temperature for at least 60 days after the animal was killed. The 60-day drying period for a trophy that 

has been frozen or boiled begins the day it is removed from the freezer, boiling pot, or submersion in any liquid.

A. Number of Points on Each Antler: To be counted a point, the projection must be at least one inch long, with the length exceeding width at 
one inch or more of length.  All points are measured from tip of point to nearest edge of beam as illustrated.  Beam tip is counted as a point 
but not measured as a point. Point totals do not add into the final score.
B. Tip to Tip Spread is measured between tips of main beams. Tip to tip spread does not add into the final score.
C. Greatest Spread is measured between perpendiculars at a right angle to the center line of the skull at widest part, whether across main 
beams or points. Greatest spread does not add into the final score.
D. Inside Spread of Main Beams is measured at a right angle to the center line of the skull at widest point between main beams.  Enter this 
measurement again as the Spread Credit if it is less than or equal to the length of the longer main beam; if greater, enter longer main beam 

length for Spread Credit.
E. Total of Lengths of all Abnormal Points:  Abnormal Points are those non-typical in location (such as points originating from a point or 
from bottom or sides of main beam) or extra points beyond the normal pattern of points.  Measure in usual manner and enter in appropriate 

blanks.
F. Length of Main Beam is measured from the center of the lowest outside edge of burr over the outer side to the most distant point of the 
main beam.  The point of beginning is that point on the burr where the center line along the outer side of the beam intersects the burr, then 
following generally the line of the illustration.
G‑1‑2‑3‑4‑5‑6‑7.  Length of Normal Points:  Normal points project from the top of the main beam.  They are measured from nearest edge of 
main beam over outer curve to tip.  Lay the tape along the outer curve of the beam so that the top edge of the tape coincides with the top edge 

of the beam on both sides of the point to determine the baseline for point measurements.  Record point lengths in appropriate blanks.
H‑1‑2‑3‑4.  Circumferences are taken as detailed in illustration for each measurement.  If brow point is missing, take H-1 and H-2 at smallest 
place between burr and G-2.  If G-4 is missing, take H-4 halfway between G-3 and tip of main beam.*/

int main() {

	// declare variables
	// number of points
	int numPointsRightAnt = 0;
	int numPointsLeftAnt;
	int totalNumPoint = 0;

	// number of abnormal point
	int AbnormalPointsLeft = 0;
	int AbnormalPointsRight = 0;

	// total length of abnormal points
	double totLengAbnormalPoints = 0;

	// tip to tip measurement
	double tipToTip = 0;

	// greatest spread measurement
	double greatestSpread = 0;

	// main beam measurements
	double lengMainBeamLeft = 0;
	double lengMainBeamRight = 0;
	double totLengthMainBeams = 0;

	// left point length measurement
	double g1Left = 0;
	double g2Left = 0;
	double g3Left = 0;
	double g4Left = 0;
	double g5Left = 0;
	double g6Left = 0;
	double g7Left = 0;

	// right point length measurement
	double g1Right = 0;
	double g2Right = 0;
	double g3Right = 0;
	double g4Right = 0;
	double g5Right = 0;
	double g6Right = 0;
	double g7Right = 0;


	// total length of points
	double totGLength = 0;

	// circumference measurements
	// left side
	double h1Left = 0; // Circumference at the smallest place between burr and first point
	double h2Left = 0; // Smallest place between first and second points
	double h3Left = 0; // smallest place between second and third points
	double h4left = 0; // smallest place between third and fourth points

	// right side
	double h1Right = 0;
	double h2Right = 0;
	double h3Right = 0;
	double h4Right = 0;

	//total for left and right sides including h measurements
	double totForLeft = (g1Left + g2Left + g3Left + g4Left + g5Left + g6Left + g7Left) + (h1Left + h2Left + h3Left + h4left);
	double totForRight = (g1Right + g2Right + g3Right + g4Right + g5Right + g6Right + g7Right) + (h1Right + h2Right + h3Right + h4Right);


	// totals for step 1 of addition
	double totadd = totForLeft + totForRight;
	double totdiff = 0;
	double totspread = tipToTip + greatestSpread;

	// totals for step 1 of difference
	double diffFromLeftToRight = 0;

	// final score
	double finalScore = 0;

	// opening statement
	cout << "Welcome to 4NOD's Boone and Crockett score app." << endl;
	cout << "This application is to score a typical Whitetail Deer." << endl;
	cout << "Enter all amounts to the closest 8th of an inch" << endl;
	cout << "Please input the number of legal points on the left side." << endl;
	cin >> numPointsLeftAnt;
	cout << "Number of points on the left antler is: " << numPointsLeftAnt << endl;
	cout << "Please input the number of legal points on the Right side." << endl;
	cin >> numPointsRightAnt;
	cout << "Number of points on the right antler is: " << numPointsRightAnt << endl;
	cout << "Please input the tip to tip spread measurement." << endl;
	cin >> tipToTip;
	cout << "Tip to tip spread is: " << tipToTip << " inches." << endl;
	cout << "Please enter the greatest spread measurement" << endl;
	cin >> greatestSpread;
	cout << "Greatest spread measurement is: " << greatestSpread << " inches." << endl;



}
