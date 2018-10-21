/*
 * qt-fsarchiver: Filesystem Archiver
 * 
* Copyright (C) 2008-2018 Dieter Baum.  All rights reserved.
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
    fsarchiver_go(); 
}
  
int fsarchiver_aufruf(int argc, char *anlage0=NULL, char *anlage1=NULL, char *anlage2=NULL, char *anlage3=NULL, char *anlage4=NULL, char *anlage5=NULL, char *anlage6=NULL, char *anlage7=NULL, char *anlage8=NULL, char *anlage9=NULL, char *anlage10=NULL, char *anlage11=NULL, char *anlage12=NULL, char *anlage13=NULL, char *anlage14=NULL)
{
    QString dummy;
    string filename;
    const char *filename1;
    char *argv[15];
    int ret = 0;
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
    filename = home + "/.config/qt-fsarchiver/zahlen.txt";
    filename1 = filename.c_str();
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
            parameter[k] = _attr[k+1];
       }
fsarchiver_aufruf(anzahl,parameter[0].toLatin1().data(),parameter[1].toLatin1().data(),parameter[2].toLatin1().data(),parameter[3].toLatin1().data(),parameter[4].toLatin1().data(),parameter[5].toLatin1().data (),parameter[6].toLatin1().data(),parameter[7].toLatin1().data(),parameter[8].toLatin1().data(),parameter[9].toLatin1().data(),parameter[10].toLatin1().data(),parameter[11].toLatin1().data(),parameter[12].toLatin1().data(),parameter[13].toLatin1().data(),parameter[14].toLatin1().data());
}









