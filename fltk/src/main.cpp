#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Box.H>

int main(int argc, char* argv[])
{
    auto win = new Fl_Double_Window(340, 180);
    auto box = new Fl_Box(20, 40, 300, 100, "FLTK Works!");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD | FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);
    win->end();
    win->show(argc, argv);
    return Fl::run();
}
