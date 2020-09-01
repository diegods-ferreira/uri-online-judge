<h6 align="center">URI Online Judge | 1051</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1051">
    Imposto de Renda
  </a>
</h2>
<h5 align="center">Por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.
</p>
<p>
  Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.
</p>
<p align="center">
  <img src="https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1051_pt.png" width="80%">
</p>
<p>
  Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.
</p>
<br>
<h3>Entrada</h3>
<p>
  A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.
</p>
<br>
<h3>Saída</h3>
<p>
  Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas após o ponto. Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".
</p>
<br>
<code>
  <table width="100%">
    <thead>
      <th>Exemplo de Entrada</th>
      <th>Exemplo de Saída</th>
    </thead>
    <tbody>
      <tr>
        <td>3002.00</td>
        <td>R$ 80.36</td>
      </tr>
      <tr>
        <td>1701.12</td>
        <td>Isento</td>
      </tr>
      <tr>
        <td>4520.00</td>
        <td>R$ 355.60</td>
      </tr>
    </tbody>
  </table>
</code>