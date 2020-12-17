#include "Simple_window.h" 
#include "Graph.h"  
int main()
{
	using namespace Graph_lib;


	Point tl{ 100,100 };


	Simple_window win{ tl, 1000, 1000, "Canvas" };

	/*
	Smiley smiley{ Point{ 150, 400 }, 100 };
	Smiley_hat hatty{ Point{ 150, 400 }, 100 };
	Frowny frowny{ Point{ 400, 400 }, 100 };
	Frowny_hat saddy{ Point{ 400, 400 }, 100 };



	smiley.set_color(Color::black);
	frowny.set_color(Color::black);
	hatty.set_color(Color::black);
	smiley.set_color(Color::black);

	win.attach(smiley);
	win.attach(frowny);
	win.attach(hatty);
	win.attach(saddy);

	*/

	Pseudo_window boxy{ Point(400,400),300,200 };

	win.attach(boxy);





    win.wait_for_button();
}