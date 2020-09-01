<h6 align="center">URI Online Judge | 1973</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1973">
    Jornada nas Estrelas
  </a>
</h2>
<h5 align="center">Por Leandro Zatesko, UFFS BR Brazil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Após comprar vários sítios adjacentes na região do oeste catarinense, a família Estrela construiu uma única estrada que passa por todos os sítios em sequência. O primeiro sítio da sequência foi batizado de Estrela 1, o segundo de Estrela 2, e assim por diante. Porém, o irmão que vive em Estrela 1 acabou enlouquecendo e resolveu fazer uma Jornada nas Estrelas para roubar carneiros das propriedades de seus irmãos. Mas ele está definitivamente pirado. Quando passa pelo sítio Estrela <b>i</b>, ele rouba apenas um carneiro daquele sítio (se o sítio tem algum) e segue ou para Estrela <b>i</b> + 1 ou para Estrela <b>i</b> - 1, dependendo se o número de carneiros em Estrela <b>i</b> era, respectivamente, ímpar ou par. Se não existe a Estrela para a qual ele deseja seguir, ele interrompe sua jornada. O irmão louco começa sua Jornada em Estrela 1, roubando um carneiro do seu próprio sítio.
</p>
<br>
<h3>Entrada</h3>
<p>
  A primeira linha da entrada consiste de um único inteiro <b>N</b> (1 ≤ <b>N</b> ≤ 10⁶), o qual representa o número de Estrelas. A segunda linha da entrada consiste de <b>N</b> inteiros, de modo que o <b>i</b>-ésimo inteiro, <b>X</b><sub>i</sub> (1 ≤ </b>X<sub>i</sub> ≤ 10⁶), representa o número inicial de carneiros em Estrela <b>i</b>.
</p>
<br>
<h3>Saída</h3>
<p>
  Imprima uma linha contendo dois inteiros, de modo que o primeiro represente o número de Estrelas atacadas pelo irmão louco e o segundo represente o número total de carneiros não roubados.
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
        <td>8<br>1 3 5 7 11 13 17 19</td>
        <td>8 68</td>
      </tr>
      <tr>
        <td>8<br>1 3 5 7 11 13 16 19</td>
        <td>7 63</td>
      </tr>
    </tbody>
  </table>
</code>