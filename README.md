# one-dimen-optim-derivatives
<h1>Тема: «Методы одномерной оптимизации, использующие производные»</h1>

> [ -> Отчет по лаборатоной работе (блок-схемы функций методов, скриншоты работы)](https://github.com/ktsmsnv/one-dimen-optim-derivatives/blob/9edc71f997b16dfd15c299188e5fba5969fa3758/%D0%98%D0%92%D0%A2-221%20%D0%A1%D0%B0%D0%BC%D1%81%D0%BE%D0%BD%D0%BE%D0%B2%D0%B0%20%D0%95.%D0%9E.%20%20%D0%9B%D0%A0%20N-2%20%D0%9C%D0%9E.docx)
>
> [ -> Код программы](https://github.com/ktsmsnv/one-dimen-optim-derivatives/blob/9edc71f997b16dfd15c299188e5fba5969fa3758/%D0%9C%D0%9E%20%D0%9B%D0%A0%E2%84%962.cpp)

> <strong><h2>Задание</h2></strong>
> <p>Вычислить минимальное значение функции f(x)=x^2+e^3x на интервале [-2;0] с заданной точностью ɛ.</p>
<strong><h2>Выполнение задания:</h2></strong>
<strong>Целевая функция:</strong> f(x)=x^2+e^3x <br>
<strong>Область неопределенности:</strong> [-2;0] <br> <br>

![image](https://github.com/ktsmsnv/one-dimen-optim-derivatives/assets/126246369/b70c5b51-a2e3-414e-a263-36dfba936da2)
<p>Рисунок 1 − График функции f(x)=x^2+e^3xна интервале [-2;0]</p> <br>
<p>Проверка применимости методов, использующих производные, к
заданной целевой функции на заданном отрезке локализации. Критерием
применимости является выпуклость целевой функции на заданном отрезке
локализации.</p> <br>

<h3>Первый критерий выпуклости:</h3>

![image](https://github.com/ktsmsnv/one-dimen-optim-derivatives/assets/126246369/2eafde64-71a0-408c-a2dd-6f235c33e1f7)
<p>Рисунок 2 − График функции первой производной  f '(x)=2x+3e^3xна интервале [-2;0]</p> <br>

<h3>Второй критерий выпуклости:</h3>

![image](https://github.com/ktsmsnv/one-dimen-optim-derivatives/assets/126246369/63114147-dc60-4241-a07d-75b355b5cafe)
<p>Рисунок 3 − График функции второй производной f "(x)=9e^3x+2 на интервале [-2;0]</p> <br>

<p>И из 1-го, и 2-ого критериев следует, что заданная целевая
функция на заданном отрезке локализации является выпуклой.
Следовательно, к ней применимы рассматриваемые методы, использующие
производные.</p> <br>

<h3>В ходе решения были использованы методы:</h3>
<ol>
  <li>Метод чисел Фибоначчи</li>
  <li>Метод средних</li>
  <li>Метод касательных</li>
  <li>Метод хорд</li>
  <li>Метод Ньютона</li>
</ol>

<strong><h3>Расчетные таблицы</h3></strong>
<table width="0">
<tbody>
<tr>
<td colspan="6" width="666"><strong></strong>
<p>Метод чисел Фибоначчи</p>
</td>
</tr>
<tr>
<td width="49">
<p>N</p>
</td>
<td width="123">&nbsp;</td>
<td width="123">&nbsp;</td>
<td width="130">&nbsp;</td>
<td width="122">&nbsp;</td>
<td width="119">&nbsp;</td>
</tr>
<tr>
<td width="49">
<p>10</p>
</td>
<td width="123">
<p>-0,427022</p>
</td>
<td width="123">
<p>0,460089</p>
</td>
<td width="130">
<p>5,61798e-05</p>
</td>
<td width="122">
<p>0,0208229</p>
</td>
<td width="119">
<p>0,011236</p>
</td>
</tr>
<tr>
<td width="49">
<p>20</p>
</td>
<td width="123">
<p>-0,422347</p>
</td>
<td width="123">
<p>0,460041</p>
</td>
<td width="130">
<p>9,18144e-05</p>
</td>
<td width="122">
<p>0,00029968</p>
</td>
<td width="119">
<p>9,13576e-05</p>
</td>
</tr>
<tr>
<td width="49">
<p>30</p>
</td>
<td width="123">
<p>-0,422412</p>
</td>
<td width="123">
<p>0,460041</p>
</td>
<td width="130">
<p>-2,13196e-12</p>
</td>
<td width="122">
<p>3,35137e-06</p>
</td>
<td width="119">
<p>7,42794e-07</p>
</td>
</tr>
<tr>
<td width="49">
<p>40</p>
</td>
<td width="123">
<p>-0,422413</p>
</td>
<td width="123">
<p>0,460041</p>
</td>
<td width="130">
<p>5,83294e-09</p>
</td>
<td width="122">
<p>1,0609e-08</p>
</td>
<td width="119">
<p>6,03937e-09</p>
</td>
</tr>
<tr>
<td width="49">
<p>50</p>
</td>
<td width="123">
<p>-0,422414</p>
</td>
<td width="123">
<p>0,460041</p>
</td>
<td width="130">
<p>1,10627e-06</p>
</td>
<td width="122">
<p>5,05295e-06</p>
</td>
<td width="119">
<p>4,91038e-11</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="7" width="673">
<p>Метод средних</p>
</td>
</tr>
<tr>
<td width="52">
<p>N</p>
</td>
<td width="105">&nbsp;</td>
<td width="88">&nbsp;</td>
<td width="57">
<p>k</p>
</td>
<td width="116">&nbsp;</td>
<td width="137">&nbsp;</td>
<td width="118">&nbsp;</td>
</tr>
<tr>
<td width="52">
<p>10</p>
</td>
<td width="105">
<p>-0,422852</p>
</td>
<td width="88">
<p>0,460041</p>
</td>
<td width="57">
<p>10</p>
</td>
<td width="116">
<p>0,00198971</p>
</td>
<td width="137">
<p>0,000976562</p>
</td>
<td width="118">
<p>0,000976562</p>
</td>
</tr>
<tr>
<td width="52">
<p>20</p>
</td>
<td width="105">
<p>-0,422412</p>
</td>
<td width="88">
<p>0,460041</p>
</td>
<td width="57">
<p>20</p>
</td>
<td width="116">
<p>3,11124e-06</p>
</td>
<td width="137">
<p>9,53674e-07</p>
</td>
<td width="118">
<p>9,53674e-07</p>
</td>
</tr>
<tr>
<td width="52">
<p>30</p>
</td>
<td width="105">
<p>-0,422413</p>
</td>
<td width="88">
<p>0,460041</p>
</td>
<td width="57">
<p>30</p>
</td>
<td width="116">
<p>1,1596e-09</p>
</td>
<td width="137">
<p>9,31323e-10</p>
</td>
<td width="118">
<p>9,31323e-10</p>
</td>
</tr>
<tr>
<td width="52">
<p>40</p>
</td>
<td width="105">
<p>-0,422413</p>
</td>
<td width="88">
<p>0,460041</p>
</td>
<td width="57">
<p>40</p>
</td>
<td width="116">
<p>7,31304e-13</p>
</td>
<td width="137">
<p>9,094953e-13</p>
</td>
<td width="118">
<p>9,094953e-13</p>
</td>
</tr>
<tr>
<td width="52">
<p>50</p>
</td>
<td width="105">
<p>-0,422413</p>
</td>
<td width="88">
<p>0,460041</p>
</td>
<td width="57">
<p>50</p>
</td>
<td width="116">
<p>2,22045e-15</p>
</td>
<td width="137">
<p>8,88178e-16</p>
</td>
<td width="118">
<p>8,88178e-16</p>
</td>
</tr>
</tbody>
</table>
<p><strong>&nbsp;</strong></p>

<table width="0">
<tbody>
<tr>
<td colspan="6" width="672">
<p>Метод касательных</p>
</td>
</tr>
<tr>
<td width="83">
<p>N</p>
</td>
<td width="151">&nbsp;</td>
<td width="137">&nbsp;</td>
<td width="56">
<p>k</p>
</td>
<td width="115">&nbsp;</td>
<td width="130">&nbsp;</td>
</tr>
<tr>
<td width="83">
<p>10</p>
</td>
<td width="151">
<p>-0,472218</p>
</td>
<td width="137">
<p>0,465514</p>
</td>
<td width="56">
<p>10</p>
</td>
<td width="115">
<p>0,216862</p>
</td>
<td width="130">
<p>0,19277</p>
</td>
</tr>
<tr>
<td width="83">
<p>20</p>
</td>
<td width="151">
<p>-0,426205</p>
</td>
<td width="137">
<p>0,460073</p>
</td>
<td width="56">
<p>20</p>
</td>
<td width="115">
<p>0,0171434</p>
</td>
<td width="130">
<p>0,00638832</p>
</td>
</tr>
<tr>
<td width="83">
<p>30</p>
</td>
<td width="151">
<p>-0,422407</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>30</p>
</td>
<td width="115">
<p>2,66175e-05</p>
</td>
<td width="130">
<p>0,000199523</p>
</td>
</tr>
<tr>
<td width="83">
<p>40</p>
</td>
<td width="151">
<p>-0,422413</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>40</p>
</td>
<td width="115">
<p>1,65255e-06</p>
</td>
<td width="130">
<p>6,23443e-06</p>
</td>
</tr>
<tr>
<td width="83">
<p>50</p>
</td>
<td width="151">
<p>-0,422413</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>50</p>
</td>
<td width="115">
<p>7,69233e-07</p>
</td>
<td width="130">
<p>1,94842e-07</p>
</td>
</tr>
</tbody>
</table>
<p><strong>&nbsp;</strong></p>

<table width="0">
<tbody>
<tr>
<td colspan="6" width="672">
<p>Метод хорд</p>
</td>
</tr>
<tr>
<td width="83">
<p>N</p>
</td>
<td width="151">&nbsp;</td>
<td width="137">&nbsp;</td>
<td width="56">
<p>k</p>
</td>
<td width="115">&nbsp;</td>
<td width="130">&nbsp;</td>
</tr>
<tr>
<td width="83">
<p>10</p>
</td>
<td width="151">
<p>-0,422746</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>10</p>
</td>
<td width="115">
<p>0,0051317</p>
</td>
<td width="130">
<p>0,422746</p>
</td>
</tr>
<tr>
<td width="83">
<p>20</p>
</td>
<td width="151">
<p>-0,422413</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>20</p>
</td>
<td width="115">
<p>5,77307e-08</p>
</td>
<td width="130">
<p>0,422413</p>
</td>
</tr>
<tr>
<td width="83">
<p>30</p>
</td>
<td width="151">
<p>-0,422413</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>30</p>
</td>
<td width="115">
<p>2,20202e-12</p>
</td>
<td width="130">
<p>0,422413</p>
</td>
</tr>
<tr>
<td width="83">
<p>40</p>
</td>
<td width="151">
<p>-0,422413</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>40</p>
</td>
<td width="115">
<p>1,11022e-16</p>
</td>
<td width="130">
<p>0,422413</p>
</td>
</tr>
<tr>
<td width="83">
<p>50</p>
</td>
<td width="151">
<p>-0,422413</p>
</td>
<td width="137">
<p>0,460041</p>
</td>
<td width="56">
<p>50</p>
</td>
<td width="115">
<p>1,11022e-16</p>
</td>
<td width="130">
<p>0,422413</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="5" width="666">
<p>Метод Ньютона</p>
</td>
</tr>
<tr>
<td width="101">
<p>N</p>
</td>
<td width="176">&nbsp;</td>
<td width="172">&nbsp;</td>
<td width="71">
<p>k</p>
</td>
<td width="146">&nbsp;</td>
</tr>
<tr>
<td width="101">
<p>10</p>
</td>
<td width="176">
<p>-2</p>
</td>
<td width="172">
<p>4,00248</p>
</td>
<td width="71">
<p>10</p>
</td>
<td width="146">
<p>3,99256</p>
</td>
</tr>
<tr>
<td width="101">
<p>20</p>
</td>
<td width="176">
<p>-2</p>
</td>
<td width="172">
<p>4,00248</p>
</td>
<td width="71">
<p>20</p>
</td>
<td width="146">
<p>3,99256</p>
</td>
</tr>
<tr>
<td width="101">
<p>30</p>
</td>
<td width="176">
<p>-2</p>
</td>
<td width="172">
<p>4,00248</p>
</td>
<td width="71">
<p>30</p>
</td>
<td width="146">
<p>3,99256</p>
</td>
</tr>
<tr>
<td width="101">
<p>40</p>
</td>
<td width="176">
<p>-2</p>
</td>
<td width="172">
<p>4,00248</p>
</td>
<td width="71">
<p>40</p>
</td>
<td width="146">
<p>3,99256</p>
</td>
</tr>
<tr>
<td width="101">
<p>50</p>
</td>
<td width="176">
<p>-2</p>
</td>
<td width="172">
<p>4,00248</p>
</td>
<td width="71">
<p>50</p>
</td>
<td width="146">
<p>3,99256</p>
</td>
</tr>
</tbody>
</table>

<p><strong>Вывод:</strong> для заданной целевой функции на заданном отрезке
локализации при заданных числах экспериментов для рассмотренных
методов наилучший результат, по Е1 (значению производной), дают метод Ньютона и метод хорд. </p><br>

<h2>График эффективности методов</h2>

![image](https://github.com/ktsmsnv/one-dimen-optim-derivatives/assets/126246369/e811c50e-e439-4bd3-b756-a942a55a4c86)
<p>Рисунок 4 − Сравнение методов по точности от количества экспериментов</p> <br>
