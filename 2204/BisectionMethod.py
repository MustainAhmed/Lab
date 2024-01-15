
def BiSection(FUNC, a, b, Precision=1e-5, Max_Iter=100):
    if FUNC(a) * FUNC(b) >= 0:
        raise ValueError("Function has the same sign at both endpoints. Bisection method cannot be applied.")

    iter_count = 0
    while (b - a) / 2.0 > Precision and iter_count < Max_Iter:
        c = (a + b) / 2.0
        if FUNC(c) == 0.0:
            return c, iter_count
        elif FUNC(c) * FUNC(a) < 0:
            b = c
        else:
            a = c
        iter_count += 1


    root = (a + b) / 2.0
    return root, iter_count


def quadratic_function(x):
    return x**3 - 2*x -5


initial_interval = (2, 3)
root, iterations = BiSection(quadratic_function, *initial_interval)


if root is not None:
    print('Root found at x = ', root, ' after ', iterations, ' iterations.')
else:
    print("Bisection method did not converge within the specified tolerance.")
