Examples of Matlab/Octave syntax and conceptually corresponding
Armadillo syntax

---

# Examples of Matlab/Octave syntax and conceptually corresponding Armadillo syntax

 | **Matlab/Octave**       | **Armadillo**                                   | **Notes**                                                                                             |
 | --------------------    | ---------------                                 | ------------                                                                                          |
 | `A(1, 1)`               | `A(0, 0)`                                       | indexing in Armadillo starts at 0                                                                     |
 | `A(k, k)`               | `A(k-1, k-1)`                                   |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `size(A,1)`             | `A.n_rows`                                      | read only                                                                                             |
 | `size(A,2)`             | `A.n_cols`                                      |                                                                                                       |
 | `size(Q,3)`             | `Q.n_slices`                                    | `Q` is a cube (3D array)                                                                              |
 | `numel(A)`              | `A.n_elem`                                      |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `A(:, k)`               | `A.col(k)`                                      | conceptual example only; indexing starts at 0                                                         |
 | `A(k, :)`               | `A.row(k)`                                      |                                                                                                       |
 | `A(:, p:q)`             | `A.cols(p, q)`                                  |                                                                                                       |
 | `A(p:q, :)`             | `A.rows(p, q)`                                  |                                                                                                       |
 | `A(p:q, r:s)`           | `A( span(p,q), span(r,s) )`                     | `A( span(first_row, last_row), span(first_col, last_col) )`                                           |
 |                         |                                                 |                                                                                                       |
 | `Q(:, :, k)`            | `Q.slice(k)`                                    | `Q` is a cube (3D array)                                                                              |
 | `Q(:, :, t:u)`          | `Q.slices(t, u)`                                |                                                                                                       |
 | `Q(p:q, r:s, t:u)`      | `Q( span(p,q), span(r,s), span(t,u) )`          |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `A'`                    | `A.t()` or `trans(A)`                           | matrix transpose / Hermitian transpose (for complex matrices, the conjugate of each element is taken) |
 |                         |                                                 |                                                                                                       |
 | `A = zeros(size(A))`    | `A.zeros()`                                     |                                                                                                       |
 | `A = ones(size(A))`     | `A.ones()`                                      |                                                                                                       |
 | `A = zeros(k)`          | `A = zeros<mat>(k,k)`                           |                                                                                                       |
 | `A = ones(k)`           | `A = ones<mat>(k,k)`                            |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `C = complex(A,B)`      | `cx_mat C = cx_mat(A,B)`                        |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `A .* B`                | `A % B`                                         | element-wise multiplication                                                                           |
 | `A ./ B`                | `A / B`                                         | element-wise division                                                                                 |
 | `A \ B`                 | `solve(A,B)`                                    | conceptually similar to `inv(A)*B`, but more efficient                                                |
 | `A = A + 1;`            | `A++`                                           |                                                                                                       |
 | `A = A - 1;`            | `A--`                                           |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `A = [ 1 2; 3 4; ]`     | `A = { { 1, 2 }, { 3, 4 } };`                   | element initialisation                                                                                |
 |                         |                                                 |                                                                                                       |
 | `X = A(:)`              | `X = vectorise(A)`                              |                                                                                                       |
 | `X = [ A  B ]`          | `X = join_horiz(A,B)`                           |                                                                                                       |
 | `X = [ A; B ]`          | `X = join_vert(A,B)`                            |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `A`                     | `cout << A << endl;                             |                                                                                                       |
 | `A`                     | `A.print("A =");`                               |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `save -ascii 'A.txt' A` | `A.save("A.txt", raw_ascii);`                   | Matlab/Octave matrices saved as ASCII are readable by Armadillo (and vice-versa)                      |
 | `load -ascii 'A.txt'`   | `A.load("A.txt", raw_ascii);`                   |                                                                                                       |
 |                         |                                                 |                                                                                                       |
 | `A = randn(2,3);        | `mat A = randn(2,3);                            | fields store arbitrary objects, such as matrices
 | `B = randn(4,5);        | `mat B = randn(4,5);                            |
 | `F = { A; B }`          | `field<mat> F(2,1);                             |
 |                         | `F(0,0) = A;`                                   |
 |                         | `F(1,0) = B;`                                   |









