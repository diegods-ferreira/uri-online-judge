<h6 align="center">URI Online Judge | 1040</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1040">
    Média 3
  </a>
</h2>
<h5 align="center">Por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  Leia quatro números (N<sub>1</sub>, N<sub>2</sub>, N<sub>3</sub>, N<sub>4</sub>), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem <i>"Media: "</i>. Se esta média for maior ou igual a 7.0, imprima a mensagem <i>"Aluno aprovado."</i>. Se a média calculada for inferior a 5.0, imprima a mensagem <i>"Aluno reprovado."</i>. Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem <i>"Aluno em exame."</i>.
</p>
<p>
  No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. Imprima então a mensagem <i>"Nota do exame: "</i> acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). e imprima a mensagem <i>"Aluno aprovado."</i> (caso a média final seja 5.0 ou mais ) ou <i>"Aluno reprovado."</i>, (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem <i>"Media final: "</i> seguido da média final para esse aluno.
</p>
<br>
<h3>Entrada</h3>
<p>
  A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.
</p>
<br>
<h3>Saída</h3>
<p>
  Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descrição do problema. Não esqueça de imprimir o <i>enter</i> após o final de cada linha, caso contrário obterá "Presentation Error".
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
        <td>2.0 4.0 7.5 8.0<br>6.4</td>
        <td>Media: 5.4<br>Aluno em exame.<br>Nota do exame: 6.4<br>Aluno aprovado.<br>Media final: 5.9</td>
      </tr>
      <tr>
        <td>2.0 6.5 4.0 9.0</td>
        <td>Media: 4.8<br>Aluno reprovado.</td>
      </tr>
      <tr>
        <td>9.0 4.0 8.5 9.0</td>
        <td>Media: 7.3<br>Aluno aprovado.</td>
      </tr>
    </tbody>
  </table>
</code>