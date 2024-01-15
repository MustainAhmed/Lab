
def Newton_Raphson(FUNC, FUNC_DERIVATIVE, x0, Precision=1e-10, Max_Iter=100):
    x = x0
    iter_count = 0


    while iter_count < Max_Iter:
        f_x = FUNC(x)
        f_prime_x = FUNC_DERIVATIVE(x)


        if abs(f_x) < Precision:
            return x, iter_count


        if f_prime_x == 0:
            return None, iter_count


        x = x - f_x / f_prime_x
        iter_count += 1


    return None, iter_count


def cubic_function(x):
     return x**3 - 4*x**2 - x + 4


def cubic_function_derivative(x):
    return 3*x**2 - 8*x - 1


initial_guess = 3.0
root, iterations = Newton_Raphson(cubic_function, cubic_function_derivative, initial_guess)


if root is not None:
    print('Root found at x = ',root, 'after: ', iterations, 'iterations.')
else:
    print('Newton-Raphson method did not converge within the specified tolerance.')