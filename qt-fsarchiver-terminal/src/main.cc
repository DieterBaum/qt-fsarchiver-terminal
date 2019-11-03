/*
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License v2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */

#include "main.h"
#include <QtGui>
#include <string.h>

#define __STDC_FORMAT_MACROS

using namespace std;

int dialog_auswertung;
QString parameter[15];
QString add_part[100];
QString homepath;
QString aufruf;
string home;
char home1[100];
extern "C" {
   int fsarchiver_main(int argc, char**argv);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {   fprintf(stderr, "No arguments provided, cannot continue\n");
        return -1;
    }
    home = argv[1];
    homepath = argv[1];
    strcpy (home1, home.c_str());
    strcat(home1, "/");
    aufruf = argv[2];
    if (homepath == "version")
    {
       qDebug() << "Version: 0.8.5-12";
       return 1;
    }
    if (aufruf == "version")
    {
    QString filename = homepath + "/.config/qt-fsarchiver/version.txt";
    QFile file(filename);
    file.open(QIODevice::WriteOnly);
    QDataStream out(&file);
    out << QString("0.8.5-12");
    file.close();
    return 1;
    }
    fsarchiver_go(); 
}
  
int fsarchiver_aufruf(int argc, char *anlage0=NULL, char *anlage1=NULL, char *anlage2=NULL, char *anlage3=NULL, char *anlage4=NULL, char *anlage5=NULL, char *anlage6=NULL, char *anlage7=NULL, char *anlage8=NULL, char *anlage9=NULL, char *anlage10=NULL, char *anlage11=NULL, char *anlage12=NULL, char *anlage13=NULL, char *anlage14=NULL)
{
    QString dummy;
    int found = 0;
    int i = 0;
    string filename;
    const char *filename1;
    char *argv[15];
    int ret = 0;
    string str;
    std::size_t pos = 0;
 
    argv[0] = anlage0;
    argv[1] = anlage1;
    argv[2] = anlage2;
    argv[3] = anlage3;
    argv[4] = anlage4;
    argv[5] = anlage5;
    argv[6] = anlage6;
    argv[7] = anlage7;
    argv[8] = anlage8;
    argv[9] = anlage9;
    argv[10] = anlage10;
    argv[11] = anlage11;
    argv[12] = anlage12;
    argv[13] = anlage13;
    argv[14] = anlage14;

    string str0 (argv[0]); //char to string
    string str1 (argv[1]); 
    string str2 (argv[2]); 
    string str3 (argv[3]); 
    string str4 (argv[4]); 
    string str5 (argv[5]); 
    string str6 (argv[6]); 
    string str7 (argv[7]); 
    string str8 (argv[8]); 
    string str9 (argv[9]); 
    string str10 (argv[10]); 
    string str11 (argv[11]); 
    string str12 (argv[12]); 
    string str13 (argv[13]); 
    string str14 (argv[14]); 
    
    str = str1;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[1] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str2;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[2] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str3;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[3] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str4;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[4] = strdup(xxx);             //const char zu char[50] wandeln
    }
    
    str = str5;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[5] = strdup(xxx);             //const char zu char[50] wandeln
    }
    
    str = str6;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[6] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str7;
    pos = str.find("'",0);
    if(pos==0)
    {
    // ' muss entfernt werden
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[7] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str8;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[8] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str9;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[9] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str10;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[10] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str11;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[11] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str12;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[12] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str13;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[13] = strdup(xxx);             //const char zu char[50] wandeln
    }

    str = str14;
    pos = str.find("'",0);
    if(pos==0)
    {
    while(1)
       {
	    string::size_type loc = str.find( "'", 0 );
	    if( loc != string::npos )
	    	str.replace(loc,1,"");
	    else
	    	break;
	}
        const char * xxx = str.c_str();  //QString zu const char wandeln
        argv[14] = strdup(xxx);             //const char zu char[50] wandeln
    }
 


//qDebug() << "anlagen in fsarchirver" << anlage0 << anlage1 << anlage2 << anlage3 << anlage4 << anlage5 << anlage6 << anlage7;
    filename = home + "/.config/qt-fsarchiver/zahlen.txt";
    filename1 = filename.c_str();  //string to const char
    ret = fsarchiver_main(argc, argv);
   dummy = anlage1;
   if (dummy != "archinfo")
    {
//printf("in mainwindow in != archinfo \n");
   FILE *fp;
   fp = fopen(filename1, "a");
   if (ret == 0)
      fprintf(fp, "%d %s\n", 10, "p");
   if (ret != 0)
      fprintf(fp, "%d %s\n", 11, "p");
   fclose(fp);
}
  if (dummy == "archinfo"){
//printf("in mainwindow  == archinfo \n");
  FILE *fp;
   fp = fopen(filename1, "a");
   if (ret == 0)
      fprintf(fp, "%d %s\n", 12, "p");
   if (ret != 0)
      fprintf(fp, "%d %s\n", 13, "p");
   fclose(fp);
  }
// printf("ret %d\n", ret);
 return ret;
}

void fsarchiver_go()
{
int k = 0;
int anzahl = 0;
QStringList _attr;
QString dummy;
int found = 0;
QString attr_;
QString attr[100][6];
QString dateiname = homepath + "/.config/qt-fsarchiver/attribute.txt";
QFile file(dateiname);
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);
	QString str;
	in >> attr_ ; 
	file.close();
        _attr = attr_.split(QRegExp("\\s+"));
        anzahl = _attr[0].toInt();
        for (k=0; k< anzahl ; k++){
          dummy = _attr[k+1];
          found = dummy.indexOf("+");
          if (found > -1)
              {
              dummy.replace(found, 1, " ");
              _attr[k+1] = "'" + dummy + "'";
              }
             parameter[k] = _attr[k+1];
       }
//qDebug() << "paramter" << parameter[0] << parameter[1] << parameter[2] << parameter[3] << parameter[4] << parameter[5] << parameter[6] << parameter[7] << parameter[8];
fsarchiver_aufruf(anzahl,parameter[0].toLatin1().data(),parameter[1].toLatin1().data(),parameter[2].toLatin1().data(),parameter[3].toLatin1().data(),parameter[4].toLatin1().data(),parameter[5].toLatin1().data (),parameter[6].toLatin1().data(),parameter[7].toLatin1().data(),parameter[8].toLatin1().data(),parameter[9].toLatin1().data(),parameter[10].toLatin1().data(),parameter[11].toLatin1().data(),parameter[12].toLatin1().data(),parameter[13].toLatin1().data(),parameter[14].toLatin1().data());
}










