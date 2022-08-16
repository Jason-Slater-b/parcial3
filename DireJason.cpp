#include <iostream>
using namespace std;

int main(){
	cout << "Content-type: text/html; charset: UTF-8;" << endl;
	cout << endl;
	cout << "<html><head>" <<  endl;
	cout << "<style>" << endl;
	cout<<"#asignacion {width:1050px;height:630px;padding:6px;background-color:white;border:1px solid black;}" <<endl;
	cout <<"#asignacion2{width:390px;height:185px;padding-left:10px;background-color:white;margin-top:10px;}"<< endl;
	cout << "#info{padding:2px;font-size:15px;margin:-8px;}"<<endl;
	cout << "#info2{padding:10px;font-size:30px;margin:-8px;}" << endl;
	cout << "#semestre2{width:490px; height:215px;padding-left:18px;background-color:white;margin-left:415px;margin-top:-185px;}"<<endl;
	cout << "#info4{padding:2px;font-size:15px; margin:-8px;}"<<endl;
	cout << "#info3{ padding:10px; font-size:30px;margin:-8px;}"<<endl;
	cout << "table { margin:15px; margin-top:px;width:950px; height:250px;}" <<endl;
	cout << ".encabezdo{border-bottom: black 1px dashed;height:25px;text-align: left;}" <<endl;
	cout << "#detalle{ border-bottom: black 1px dashed;}"<<endl;
	cout << "#firma{margin-left:550px;margin-top:-32px;}" << endl;
	cout << "</style>" << endl;
	cout << "</head>"<< endl;

	cout << "<body>" << endl;
	cout << "<h1><center>Univesidad Mariano G&aacutelvez de Guatemala</center></h1>"<<endl;
	cout << "<div  id = 'asignacion'>"<< endl;
	cout << "<div id = 'asignacion2'>"<<endl;
	cout << "<h1 id='info2'>asigancion de cursos</h1>" <<endl;
	cout << "<div>"<<endl;
	cout << "<p id='info'><b>Carnet:</b> 5390-18-3691</p>" <<endl;

	cout << "<br>"<<endl;
	cout << "<p id='info'><b>Nombre:</b> Jason Slater</p>"<<endl;
	cout << "<br>"<<endl;
	cout << "<p id='info'><b>Apellido:</b> Barreno D&iacute;z</p>"<<endl;
    	cout << "<br>" <<endl;
	cout << "<p id='info'><b>Direcci&oacute;n:</b> 2da calle lote 25 Manzana A col. vista al lago Amatitlan<p>"<<endl;
	cout << "<br>"<<endl;
	cout << "</div>" <<endl;
	cout << "</div>"<<endl;
	cout << " <div id = 'semestre2'>" <<endl;
	cout << "<h1 id='info3'>Semestre/trimestre</h1>" <<endl;
	cout << "<div>" << endl;
	cout << "<p id='inf4'><b>Carrera:</b> Ingenieria en sistemas de informacion y ciencias de la compu</p>" << endl;
	cout << "<p id='info4'><b>Jornada:</b> Domingo</p>"<<endl;
	cout << "<p id='info4'><b>ciclo:</b> 10</p>" <<endl;
	cout << "<p id='info4'><b>Mensual:</b> Q.950.00</p>" <<endl;
	cout << "<p id='info4'><b>Telefono:</b> 3249-8694</p>" << endl;
	cout << "<p id='info4'><b>Fecha asig:</b> 06/07/2022 21:48:47</p>"<<endl;
	cout << "</div> </div>" <<endl;
	cout << "<table id= 'tables'> <thead> <tr>" <<endl;
	cout << "<th id='detalle'colspan = '6'>Detalle<th>"<<endl;
	cout << "</tr> <tr>" <<endl;
	cout << "<th class='encabezdo'>Fac</th>  <th class='encabezdo'>cod</th> <th class='encabezdo'>Nombre del curso</th><th class='encabezdo'>Horario</th>"<<endl;
	cout << "<th class='encabezdo'>Aula</th> <th class='encabezdo'>Secci&oacute;n</th> </tr> </thead> <tbody id='bodytable'>" <<endl;
	cout << "<tr>" <<endl;
	cout << " <td>5390</td><td>046</td>  <td>Telecomunicaciones</td> <td>Do 1600 -1800</td><td>B-204</td>" <<endl;
	cout << "<td>A - OK</td>  </tr><tr> <td>5390</td> <td>047</td><td>Seminario de Tecnologia de informaci&oacute;n</td>"<<endl;
	cout << " <td>Do 0900 - 1100</td><td>B-204</td> <td>A - OK</td> </tr>" <<endl;
	cout << "<tr> <td>5390</td> <td>048</td> <td>Aseguramiento de la calidad de software</td> <td>Do 1400 - 1600</td>" <<endl;
	cout <<"<td>B-204</td> <td>A - OK</td></tr><tr> <td>5390</td> <td>049</td><td>Proyecto de Graduaci&oacute;n II </td>" <<endl;
	cout << " <td>Do 1100 - 1300</td><td>B-204</td> <td>A - OK</td></tr>" << endl;
	cout << " <tr> <td>5390</td> <td>050</td><td>Seguridad y Auditoria de Sistemas </td>  <td>Do 0700 –0900</td>" <<endl;
	cout << "<td>B-204</td><td>A - OK</td> </tr>" << endl;
	cout << "<tr> <td>5190</td> <td>030</td><td>Electr&oacutenica Digital</td> <td>Do 0700 - 0900</td> <td>C-208</td><td>C - OK</td></tr></tbody></table>"<<endl;
	cout << "<p>Usuario: jbarrenod Contrase&ntilde;a 570145Est$ (si no la ha cambiado) Correo Electr&oacute;nico: jbarrenod@miumg.edu.gt INSTRUCCIONES 1). Lea detenidamente este documento y proceda a firmarlo en el lugar que corresponde. 2). Guarde el original, pues es su constancia OFICIAL DE INSCRIPCI&Oacute;N y pres&eacute;ntelo para cualquier tr&aacute;mite. 3). USTED es el &uacute;nico responsable de los cursos que se asigna. 4). Si USTED, recibe sus cursos en otra secci&oacute;n que no sea la descrita en este documento, no se le podr&aacute;n ingresar sus notas. 5). Aplica MULTA de Q.25.00 por cada Evaluaci&oacute;n a la que se someta estando insolvente. EL COSTO DE REPOSICIÓN DE ESTE DOCUMENTO ES DE Q. 10.00 EN TESORER&Iacute;A</p>" <<endl;
	 cout << "<div id='fecha'><p>Fecha Impresi&oacute;n: 06/07/2022</p></div><div id='firma'><p>Firma Alumno:_______________________________</p></div></div>" << endl;
	cout << "<h1><center>Conocer&eacuteis la verdad y la verdad os har&aacute libres</center></h1>" << endl;
	cout << "</body></html>"<< endl;
	return 0;
}

