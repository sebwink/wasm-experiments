var Module = {
	preRun: [function() {
		const update = cwrap('update', null, []);
		requestAnimationFrame(function f() {
			update();
			requestAnimationFrame(f);
		});
	}],
};
