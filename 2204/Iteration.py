#IterationMethod
def Iteration(FUNC,x0,l1,l2,Precision=1e-10, Max_Iter=100):
	if abs(FUNC(l1))>1 or abs(FUNC(l2))>1:
			raise ValueError("Not converging in the given limit.")


	
	iter_count=0
	x=x0
	x1=FUNC(x)

	while abs(x1-x)>Precision and iter_count<Max_Iter:
		x=x1
		x1=FUNC(x)
		iter_count+=1

	Root=FUNC(x)
	return Root,iter_count


def Fi_Function(x):
	return (x+1)**(-1/2)

initial_limit=(0,1)
initial_value=.75

Root,iteration=Iteration(Fi_Function,initial_value,*initial_limit)

if Root is not None:
    print('Root found at x = ', Root, ' after ', iteration, ' iterations.')
else:
    print("Iteration method did not converge within the specified tolerance.")

		