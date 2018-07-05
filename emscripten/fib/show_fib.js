Module.onRuntimeInitialized = _ => {
	const fib = Module.cwrap('fib',
			                 'number',
			                 ['number']);
	document.getElementById("fn").innerHTML = fib(12); // 233
}
