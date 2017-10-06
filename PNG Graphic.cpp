#pragma warning(disable : 4996)
#include <pngwriter.h>


int main()
{


	pngwriter* image = new pngwriter(700, 700, 0.05, "graphic.png");



							/*top panel*/
	/*sky gradient*/

	for (int y = 570; y < 670; y++)
		image->filledsquare_blend(0, y, 700, y, 1.0, 0.03, 0.03, 0.07);

	for (int y = 470; y < 570; y++)
		image->filledsquare_blend(0, y, 700, y, 0.87, 0.02, 0.02, 0.08);

	for (int y = 408; y < 470; y++)
		image->filledsquare_blend(0, y, 700, y, 0.86, 0.01, 0.01, 0.1);

	for (int y = 350; y < 408; y++)
		image->filledsquare_blend(0, y, 700, y, 0.78, 0.01, 0.01, 0.12);

	for (int y = 291; y < 350; y++)
		image->filledsquare_blend(0, y, 700, y, 0.59, 0.01, 0.01, 0.12);


	/* stars */
	image->filleddiamond(31, 492, 5, 5, 1.0, 1.0, 1.0);
	image->filleddiamond(171, 660, 6, 6, 1.0, 1.0, 1.0);
	image->filleddiamond(390, 598, 6, 6, 0.0, 1.0, 1.0);
	image->filleddiamond(369, 425, 5, 5, 0.0, 1.0, 1.0);

	image->filleddiamond(200, 600, 15, 15, 1.0, 1.0, 1.0);
	image->filleddiamond(70, 470, 15, 15, 1.0, 1.0, 1.0);

	image->filleddiamond(630, 490, 15, 15, 0.0, 1.0, 1.0);
	image->filleddiamond(450, 550, 15, 15, 0.0, 1.0, 1.0);
	image->filleddiamond(40, 600, 15, 15, 0.0, 1.0, 1.0);

	image->diamond(370, 650, 15, 15, 1.0, 1.0, 1.0);
	image->diamond(500, 450, 15, 15, 1.0, 1.0, 1.0);
	image->diamond(330, 550, 15, 15, 0.0, 1.0, 1.0);
	image->diamond(80, 550, 15, 15, 0.0, 1.0, 1.0);


	/*my last girlfriend turned into the moon*/
	for (int x = 0; x < 50; x++)
		image->circle(600, 600, x, 1.0, 1.0, 1.0);


	/*alien in ship code*/

	image->bezier(181, 494, 108, 579, 225, 507, 269, 600, 0.0, 1.0, 0.0);
	image->bezier(182, 495, 108, 579, 226, 508, 269, 600, 0.0, 1.0, 0.0);
	image->bezier(182, 495, 108, 579, 227, 507, 269, 600, 0.0, 1.0, 0.0);

	image->filledcircle_blend(184, 536, 7, 0.75, 0.5, 1.0, 0.0);
	image->filledcircle_blend(204, 536, 7, 0.75, 0.5, 1.0, 0.0);

	/*ship code*/

	image->arrow(184, 576, 170, 610, 15, 75, 0.0, 0.93, 0.9); //top of ship
	image->bezier(140, 497, 146, 593, 255, 537, 221, 600, 0.0, 0.93, 0.9); //space ship top semicircle 
	image->bezier(140, 497, 201, 483, 256, 537, 241, 511, 0.0, 0.93, 0.9);//ship semicircle line

	image->line(255, 536, 273, 529, 0.0, 0.93, 0.9); //right line
	image->line(130, 482, 140, 497, 0.0, 0.93, 0.9); //left line
	image->bezier(130, 482, 205, 473, 273, 529, 250, 506, 0.0, 0.93, 0.9);//ship middle part line

	image->line(63, 405, 130, 482, 0.0, 0.93, 0.9); //left line
	image->line(273, 529, 391, 515, 0.0, 0.93, 0.9); //right line
	image->bezier(63, 405, 168, 386, 391, 515, 369, 453, 0.0, 0.93, 0.9);//ship bottom part line

	image->filleddiamond(146, 488, 6, 6, 0.8, 0.0, 0.7); //circles in middle section ship 
	image->filleddiamond(171, 487, 6, 6, 0.8, 0.0, 0.7); //c2
	image->filleddiamond(201, 492, 5, 5, 0.8, 0.0, 0.7); //c3
	image->filleddiamond(227, 501, 5, 5, 0.8, 0.0, 0.7); //c4
	image->filleddiamond(255, 523, 6, 6, 0.8, 0.0, 0.7); //c5

	image->line(140, 403, 167, 480, 0.0, 0.93, 0.9); //space ship bottom sector1
	image->line(215, 490, 250, 431, 0.0, 0.93, 0.9); //space ship bottom sectors2
	image->line(250, 511, 340, 463, 0.0, 0.93, 0.9); //space ship bottom sectors3

	int p1[8] = { 63,405,180,398,340,450,391,513 }; //bottom section ship 
	image->polygon_blend(p1, 4, 0.8, 0.0, 0.93, 0.9);



						/*middle and bottom panel*/

	/*hills colouring */

	image->filledtriangle(0, 290, 52, 380, 142, 290, 0.44, 0.24, 0.09); //middle blend1 
	image->filledtriangle(0, 290, 0, 334, 52, 380, 0.33, 0.2, 0.11); // left blend1

	image->filledtriangle_blend(142, 290, 129, 304, 174, 359, 0.7, 0.39, 0.25, 0.17);//left
	image->filledtriangle_blend(142, 290, 215, 290, 174, 359, 0.9, 0.39, 0.25, 0.17);//middle

	image->filledtriangle_blend(600, 290, 700, 290, 650, 390, 0.8, 0.34, 0.24, 0.08);//middle
	image->filledtriangle_blend(700, 290, 650, 390, 700, 320, 0.6, 0.26, 0.2, 0.1);

	
	/*grassy area at the bottom */
	
	image->filledsquare_blend(0, 0, 700, 290, 0.8, 0.13, 0.56, 0.19);
	for (int x = 0; x < 750; x += 20)
		image->filleddiamond(x, 0, 60,60, 0.08, 0.33, 0.11);

	for (int x1 = 10; x1 < 750; x1+= 20)
		for (int y = 10; y < 270; y+= 50)
	{
		image->diamond(x1, y, 30, 50, 0.08, 0.33, 0.11);
	}
	
	//green strip at bottom of hills 
	for (int x = 0; x < 710; x += 3)
	{
		image->cross(x, 290, 3, 5, 0.04, 0.19, 0.03);
		image->maltesecross(x, 290, 3, 5, 2, 2, 0.04, 0.19, 0.03);
	}


		 
		 /*code for the person*/
	
	/* hair */
	for (int x = 245; x < 358; x++)
		image->bezier(x, 176, 248, 298, x, 176, 355, 294,  0.0, 0.0, 0.0);
	image->line(245, 176, 358, 176, 0.0, 0.0, 0.0);
	
	image->bezier(261, 215, 265, 268, 340, 215, 340, 275, 1.0, 0.0, 1.0);
	image->filleddiamond(330, 245, 12, 12, 1.0, 0.0, 1.0);

	/*outfit */ 
	image->filledtriangle(250, 90, 350, 90, 300, 190, 0.9, 0.2, 0.3);
	image->filleddiamond(290, 120, 37, 47, 0.5, 0.8, 0.2);
	image->diamond(307, 125, 37, 47, 0.0, 0.0, 0.0);

	/*face*/
	image->filledcircle(300, 215, 30, 0.87, 0.73, 0.34); // face
	image->filledcircle(290, 220, 4, 0.27, 0.1, 0.02);//left eye
	image->filledcircle(310, 220, 4, 0.27, 0.1, 0.02);//right eye
	image->filledcircle_blend(290, 218, 2, 0.9, 1.0, 1.0, 1.0);//left eye white part
	image->filledcircle_blend(310, 218, 2, 0.9, 1.0, 1.0, 1.0);//right eye white part

	image->square_blend(283, 213, 298, 227, 1.0, 1.0, 1.0, 1.0);//left glass
	image->square_blend(284, 214, 299, 228, 1.0, 1.0, 1.0, 1.0);//left glass
	image->square_blend(302, 213, 317, 227, 1.0, 1.0, 1.0, 1.0);//right glass
	image->square_blend(303, 214, 318, 228, 1.0, 1.0, 1.0, 1.0);//right glass
	image->line(283, 219, 273, 228.5, 1.0, 1.0, 1.0);//left handle
	image->line(318, 219, 328, 228, 1.0, 1.0, 1.0);//right handle
	image->filleddiamond(300, 207.5, 3, 3.5, 0.27, 0.1, 0.02); //nose

	for(int x = 297; x < 303; x++)
		image->filleddiamond(x, 195, 5, 5, 1.0, 0.0, 0.0); // mouth 

	
	/*arms*/

	for (int x = 280; x <285; x++)
		image->line(x, 160, 245, 140, 0.87, 0.73, 0.3);

	for (int x = 315; x <321; x++)
		image->line(x, 160, 350, 140, 0.87, 0.73, 0.3);


	/*legs*/
	image->filledtriangle_blend(290, 50, 325, 50, 380, 75, 1.0, 0.23, 0.24, 0.2);//shadow 
	image->filledsquare(280,90,290,50,0.0,0.0,0.0); //left leg
	image->filledsquare(305, 90, 315, 50, 0.0, 0.0, 0.0); //right leg

	image->filledtriangle(280,50 ,290,50 ,275,45,  1.0, 1.0, 0.0); //left shoe
	image->filledtriangle(305, 50, 315, 50, 300, 45, 1.0, 1.0, 0.0); //right shoe

	


	/*other stuff*/

		/*beam me up scotty*/
	image->filledtriangle_blend(78, 16, 187, 77, 215, 407, 0.9, 1.0, 1.0, 0.0); //left light 
	image->filledtriangle_blend(396, 141, 542, 75, 279, 432, 0.9, 1.0, 1.0, 0.0); //right light 



		/*speech bubble*/
	image->filledtriangle(344, 225, 380, 275, 490, 280, 1.0, 1.0, 1.0);

	for(int x = 410; x < 495; x+=10)
		for (int y = 280; y < 365; y+=10)
	{
			image->filledcircle(x, y, 55,1.0, 1.0, 1.0);			
	}


		/*text*/
	char* label1 = (char*)("I will");
	char* label2 = (char*)("literally");
	char* label3= (char*)("pay you to");
	char* label4 = (char*)("abduct me");
	char* label5 = (char*)("Theme: Aliens");
	char* fontPath = (char*)("SuperWebcomicBros.ttf");
	char* fontPath2 = (char*)("SuperWebcomicBrosBold.ttf");
	
	
	image->plot_text(fontPath, 22, 415,367, 0, label1, 1.0, 0.0, 0.0);
	image->plot_text(fontPath, 22, 400, 340, 0, label2, 1.0, 0.0, 0.0);
	image->plot_text(fontPath, 22, 380, 310, 0, label3, 1.0, 0.0, 0.0);
	image->plot_text(fontPath2, 22.5, 379, 280, 0, label4, 1.0, 0.0, 0.0);
	image->plot_text(fontPath, 12, 350 ,678, 0, label5, 1.0, 0.0, 0.0);
	
	
					/* Grid Lines For Reference  */ 
	
	image->line(0, 670, 700, 670, 1.0, 1.0, 1.0); //top horizontal
	//image->line(0, 350, 700, 350, 1.0, 0.0, 0.0); // horizontal middle
	//image->line(350, 0, 350, 700, 1.0, 0.0, 0.0); //vertical middle


 
	image->close(); 
	return 0;
}


