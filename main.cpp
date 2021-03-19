#include<QApplication> //header file to build app
#include <QLabel> //header to add label
//writing main function
int main(int argc,char* argv[])
{
  QApplication app(argc,argv);//creating object of Qapplication
  QLabel *label=new QLabel("Hello World"); //take label=text you want to show on screen
  label->setWindowTitle("My App");//set title of application
  label->resize(400,400);//set size of apps
  label->show(); //show  label

  return app.exec(); //return app
}
//build the app and run
