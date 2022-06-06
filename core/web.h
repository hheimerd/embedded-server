#ifndef __WEB_H__
#define __WEB_H__
const char PAGE_MAIN[] PROGMEM = R"=====(


 <html lang="en">
<head>
	<meta charset='utf-8'>
	<meta name='viewport' content='width=device-width,initial-scale=1'>

	<title>Svelte app</title>

	<link rel='icon' type='image/png' href='/favicon.png'>
	<style>
		html, body {
			position: relative;
			width: 100%;
			height: 100%;
		}

		body {
			color: #333;
			margin: 0;
			padding: 8px;
			box-sizing: border-box;
			font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Oxygen-Sans, Ubuntu, Cantarell, "Helvetica Neue", sans-serif;
		}

		button {
			cursor: pointer;
		}

		body, html, main {
			margin: 0;
			padding: 0;
		}

		.row, .column {
			display: flex;
		}

		.row {
			flex-direction: row;
		}

		.column {
			flex-direction: column;
		}

		.flex-end {
			align-self: flex-end;
		}

		.flex-start {
			align-self: flex-start;
		}

		* {
			box-sizing: border-box;
		}

		input {
			margin: 0;
		}

		input, button, select, textarea {
			font-family: inherit;
			font-size: inherit;
			padding: 0.4em;
			box-sizing: border-box;
			border: 1px solid #ccc;
			border-radius: 2px;
		}

		a {
			color: rgb(0, 100, 200);
			text-decoration: none;
		}

		a:hover {
			text-decoration: underline;
		}

		a:visited {
			color: rgb(0, 80, 160);
		}

		label {
			display: block;
		}


		input:disabled {
			color: #ccc;
		}

		button {
			color: #333;
			background-color: #f4f4f4;
			outline: none;
		}

		button:disabled {
			color: #999;
		}

		button:not(:disabled):active {
			background-color: #ddd;
		}

		button:focus {
			border-color: #666;
		}
	</style>
	<style>
		.wrapper.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{max-width:100vw;height:100vh;display:flex;background:url("/img/MainWindow.jpg") no-repeat center center fixed;-webkit-background-size:cover;-moz-background-size:cover;-o-background-size:cover;background-size:cover}.sidebar.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{width:350px;background:rgba(50, 162, 225, 0.8);height:100%}.logo-wrapper.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{display:flex;justify-content:center;padding:20px 80px}.logo-wrapper.svelte-1pxicek img.svelte-1pxicek.svelte-1pxicek{max-width:140px;height:auto;margin:auto}.sidebar-sensor-list.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{overflow-y:auto;width:100%;height:100%}.work-screen.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{height:100vh;display:flex;flex-direction:column;flex-grow:1;min-width:100px}.header.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{display:flex;flex-direction:row;width:100%;padding:0 50px;box-sizing:border-box;user-select:none}.header__back-button.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{min-height:50px;height:50px;min-width:50px;width:50px;border-radius:100%;margin:auto}.header__back-button.svelte-1pxicek img.svelte-1pxicek.svelte-1pxicek{transform:rotateZ(-90deg)}.header__title.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{flex-grow:1;padding:0 30px}.header__buttons.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{margin:auto}.header__buttons.svelte-1pxicek>button.svelte-1pxicek.svelte-1pxicek{width:60px;height:60px;outline:none;border:none;border-radius:0;background:transparent;transition:0.05s}.header__buttons.svelte-1pxicek img.svelte-1pxicek.svelte-1pxicek{-webkit-user-drag:none;-khtml-user-drag:none;-moz-user-drag:none;-o-user-drag:none;user-drag:none}.header__buttons.svelte-1pxicek>button.svelte-1pxicek.svelte-1pxicek:hover{background-color:white}.header__buttons.svelte-1pxicek>button.svelte-1pxicek.svelte-1pxicek:active{background-color:#c4c4c4}.header__buttons.svelte-1pxicek>button.svelte-1pxicek.svelte-1pxicek:disabled{background-color:#c4c4c4;cursor:auto}.header__buttons.svelte-1pxicek>button.svelte-1pxicek>img.svelte-1pxicek{height:100%;object-fit:cover}.charts-wrapper.svelte-1pxicek.svelte-1pxicek.svelte-1pxicek{display:flex;margin:1rem;flex:1;position:relative;min-width:300px;min-height:300px}.wrapper.svelte-c4be6v.svelte-c4be6v{cursor:pointer;display:grid;width:100%;grid-template:50px minmax(50px, auto)/60px 1fr;grid-template-areas:"icon sensor-label"
 "expander expander";color:black;padding:1rem}.selected.wrapper.svelte-c4be6v.svelte-c4be6v{background:white}.icon.svelte-c4be6v.svelte-c4be6v{height:90%;grid-area:icon}.sensor-label.svelte-c4be6v.svelte-c4be6v{cursor:pointer;grid-area:sensor-label;height:30px;margin:auto 0;font-weight:bold;padding:0;vertical-align:center;text-wrap:none}.expander.svelte-c4be6v.svelte-c4be6v{grid-area:expander;grid-row:2;grid-column:1 / span 2;background:white;border-radius:30px;border:1px solid #DADADA;padding:0.5rem 0.5rem;font-size:1.3rem}.expander-header.svelte-c4be6v.svelte-c4be6v{display:flex;flex-direction:row;padding-left:1.5rem}.value.svelte-c4be6v.svelte-c4be6v{flex-grow:1;margin-top:2px}.expander-button.svelte-c4be6v.svelte-c4be6v{width:30px;height:30px;margin:3px auto 0 1rem;background:url("/img/arrow.svg");border:none;transform:rotateX(180deg);transition:0.2s}.expander_open.svelte-c4be6v .expander-button.svelte-c4be6v{transform:rotateX(0)}.expander-hr.svelte-c4be6v.svelte-c4be6v{margin-top:14px;display:none}.expander_open.svelte-c4be6v .expander-hr.svelte-c4be6v{display:block}.expander-body.svelte-c4be6v.svelte-c4be6v{flex-direction:column;justify-content:space-around;gap:0.4rem;font-size:1rem;transition:0.3s;padding:0 30px 0;display:flex;overflow:hidden;height:0}.expander_open.svelte-c4be6v .expander-body.svelte-c4be6v{padding:10px 30px 10px;height:140px}.expander-body.svelte-c4be6v input[type="number"].svelte-c4be6v{height:30px;border-radius:4px;width:5rem}.min-max.svelte-c4be6v.svelte-c4be6v{display:flex;flex-direction:row;justify-content:space-between;align-items:center}.apply-button.svelte-c4be6v.svelte-c4be6v{border-radius:30px;border:1px solid black}.table-wrapper.svelte-1d93054.svelte-1d93054{width:100%;height:100%;min-width:300px;min-height:300px;border-radius:0.5rem;background-color:white;padding:1rem 1rem 1rem 2rem}.scroll.svelte-1d93054.svelte-1d93054{overflow:scroll;height:100%;padding-right:1rem;width:100%}.table-wrapper.hidden.svelte-1d93054.svelte-1d93054{visibility:hidden}table.svelte-1d93054.svelte-1d93054{border-collapse:collapse;white-space:break-spaces;min-width:100%}tr.svelte-1d93054.svelte-1d93054{border-bottom:1px solid #9c9c9c}thead.svelte-1d93054>tr.svelte-1d93054{border-bottom:2px solid #9c9c9c;font-weight:bold}td.svelte-1d93054.svelte-1d93054{padding:0 1rem;height:2rem}.svelte-1d93054.svelte-1d93054::-webkit-scrollbar{width:14px;height:14px}.svelte-1d93054.svelte-1d93054::-webkit-scrollbar-track{border-radius:10px;background:#DADADA}.svelte-1d93054.svelte-1d93054::-webkit-scrollbar-thumb{border-radius:10px;border:3px solid #DADADA;background:#9c9c9c}.chart-wrapper.svelte-1v605pv{border-radius:0.5rem;background-color:white;display:grid;grid-template:1fr 2rem /  2rem 1fr;grid-template-areas:"chart-label-y chart"
 ". chart-label-x";padding:1rem;flex:1;position:absolute;top:0;left:0;width:100%;height:100%;min-width:300px;min-height:300px}.chart-wrapper.hidden.svelte-1v605pv{visibility:hidden}.chart-label.svelte-1v605pv{font-weight:bold;text-align:center;font-size:1.4rem}.chart-label-y.svelte-1v605pv{grid-area:chart-label-y;writing-mode:vertical-rl;margin-left:-0.5rem;transform:rotate(-180deg)}.chart-label-x.svelte-1v605pv{grid-area:chart-label-x}.chart.svelte-1v605pv{position:relative;grid-area:chart;max-height:99%;max-width:99%}.crosshair-label.svelte-1v605pv{position:absolute;pointer-events:none;z-index:10;margin:20px;background-color:white;border:1px solid black;padding:0.5rem;border-radius:0.25rem}.tv-lightweight-charts{position:absolute;top:0;left:0;border:1px solid black}
	</style>

</head>

<body>
</body>
<script>

	(function(l, r) { if (!l || l.getElementById('livereloadscript')) return; r = l.createElement('script'); r.async = 1; r.src = '//' + (self.location.host || 'localhost').split(':')[0] + ':35729/livereload.js?snipver=1'; r.id = 'livereloadscript'; l.getElementsByTagName('head')[0].appendChild(r) })(self.document);
	var app = (function () {
		'use strict';

		function noop() { }
		function add_location(element, file, line, column, char) {
			element.__svelte_meta = {
				loc: { file, line, column, char }
			};
		}
		function run(fn) {
			return fn();
		}
		function blank_object() {
			return Object.create(null);
		}
		function run_all(fns) {
			fns.forEach(run);
		}
		function is_function(thing) {
			return typeof thing === 'function';
		}
		function safe_not_equal(a, b) {
			return a != a ? b == b : a !== b || ((a && typeof a === 'object') || typeof a === 'function');
		}
		let src_url_equal_anchor;
		function src_url_equal(element_src, url) {
			if (!src_url_equal_anchor) {
				src_url_equal_anchor = document.createElement('a');
			}
			src_url_equal_anchor.href = url;
			return element_src === src_url_equal_anchor.href;
		}
		function is_empty(obj) {
			return Object.keys(obj).length === 0;
		}
		function append(target, node) {
			target.appendChild(node);
		}
		function insert(target, node, anchor) {
			target.insertBefore(node, anchor || null);
		}
		function detach(node) {
			node.parentNode.removeChild(node);
		}
		function destroy_each(iterations, detaching) {
			for (let i = 0; i < iterations.length; i += 1) {
				if (iterations[i])
					iterations[i].d(detaching);
			}
		}
		function element(name) {
			return document.createElement(name);
		}
		function text(data) {
			return document.createTextNode(data);
		}
		function space() {
			return text(' ');
		}
		function listen(node, event, handler, options) {
			node.addEventListener(event, handler, options);
			return () => node.removeEventListener(event, handler, options);
		}
		function prevent_default(fn) {
			return function (event) {
				event.preventDefault();
				// @ts-ignore
				return fn.call(this, event);
			};
		}
		function stop_propagation(fn) {
			return function (event) {
				event.stopPropagation();
				// @ts-ignore
				return fn.call(this, event);
			};
		}
		function attr(node, attribute, value) {
			if (value == null)
				node.removeAttribute(attribute);
			else if (node.getAttribute(attribute) !== value)
				node.setAttribute(attribute, value);
		}
		function to_number(value) {
			return value === '' ? null : +value;
		}
		function children(element) {
			return Array.from(element.childNodes);
		}
		function set_input_value(input, value) {
			input.value = value == null ? '' : value;
		}
		function set_style(node, key, value, important) {
			if (value === null) {
				node.style.removeProperty(key);
			}
			else {
				node.style.setProperty(key, value, important ? 'important' : '');
			}
		}
		function toggle_class(element, name, toggle) {
			element.classList[toggle ? 'add' : 'remove'](name);
		}
		function custom_event(type, detail, { bubbles = false, cancelable = false } = {}) {
			const e = document.createEvent('CustomEvent');
			e.initCustomEvent(type, bubbles, cancelable, detail);
			return e;
		}

		let current_component;
		function set_current_component(component) {
			current_component = component;
		}
		function get_current_component() {
			if (!current_component)
				throw new Error('Function called outside component initialization');
			return current_component;
		}
		function onMount(fn) {
			get_current_component().$$.on_mount.push(fn);
		}
		function createEventDispatcher() {
			const component = get_current_component();
			return (type, detail, { cancelable = false } = {}) => {
				const callbacks = component.$$.callbacks[type];
				if (callbacks) {
					// TODO are there situations where events could be dispatched
					// in a server (non-DOM) environment?
					const event = custom_event(type, detail, { cancelable });
					callbacks.slice().forEach(fn => {
						fn.call(component, event);
					});
					return !event.defaultPrevented;
				}
				return true;
			};
		}
		// TODO figure out if we still want to support
		// shorthand events, or if we want to implement
		// a real bubbling mechanism
		function bubble(component, event) {
			const callbacks = component.$$.callbacks[event.type];
			if (callbacks) {
				// @ts-ignore
				callbacks.slice().forEach(fn => fn.call(this, event));
			}
		}

		const dirty_components = [];
		const binding_callbacks = [];
		const render_callbacks = [];
		const flush_callbacks = [];
		const resolved_promise = Promise.resolve();
		let update_scheduled = false;
		function schedule_update() {
			if (!update_scheduled) {
				update_scheduled = true;
				resolved_promise.then(flush);
			}
		}
		function add_render_callback(fn) {
			render_callbacks.push(fn);
		}
		// flush() calls callbacks in this order:
		// 1. All beforeUpdate callbacks, in order: parents before children
		// 2. All bind:this callbacks, in reverse order: children before parents.
		// 3. All afterUpdate callbacks, in order: parents before children. EXCEPT
		//    for afterUpdates called during the initial onMount, which are called in
		//    reverse order: children before parents.
		// Since callbacks might update component values, which could trigger another
		// call to flush(), the following steps guard against this:
		// 1. During beforeUpdate, any updated components will be added to the
		//    dirty_components array and will cause a reentrant call to flush(). Because
		//    the flush index is kept outside the function, the reentrant call will pick
		//    up where the earlier call left off and go through all dirty components. The
		//    current_component value is saved and restored so that the reentrant call will
		//    not interfere with the "parent" flush() call.
		// 2. bind:this callbacks cannot trigger new flush() calls.
		// 3. During afterUpdate, any updated components will NOT have their afterUpdate
		//    callback called a second time; the seen_callbacks set, outside the flush()
		//    function, guarantees this behavior.
		const seen_callbacks = new Set();
		let flushidx = 0; // Do *not* move this inside the flush() function
		function flush() {
			const saved_component = current_component;
			do {
				// first, call beforeUpdate functions
				// and update components
				while (flushidx < dirty_components.length) {
					const component = dirty_components[flushidx];
					flushidx++;
					set_current_component(component);
					update(component.$$);
				}
				set_current_component(null);
				dirty_components.length = 0;
				flushidx = 0;
				while (binding_callbacks.length)
					binding_callbacks.pop()();
				// then, once components are updated, call
				// afterUpdate functions. This may cause
				// subsequent updates...
				for (let i = 0; i < render_callbacks.length; i += 1) {
					const callback = render_callbacks[i];
					if (!seen_callbacks.has(callback)) {
						// ...so guard against infinite loops
						seen_callbacks.add(callback);
						callback();
					}
				}
				render_callbacks.length = 0;
			} while (dirty_components.length);
			while (flush_callbacks.length) {
				flush_callbacks.pop()();
			}
			update_scheduled = false;
			seen_callbacks.clear();
			set_current_component(saved_component);
		}
		function update($$) {
			if ($$.fragment !== null) {
				$$.update();
				run_all($$.before_update);
				const dirty = $$.dirty;
				$$.dirty = [-1];
				$$.fragment && $$.fragment.p($$.ctx, dirty);
				$$.after_update.forEach(add_render_callback);
			}
		}
		const outroing = new Set();
		let outros;
		function group_outros() {
			outros = {
				r: 0,
				c: [],
				p: outros // parent group
			};
		}
		function check_outros() {
			if (!outros.r) {
				run_all(outros.c);
			}
			outros = outros.p;
		}
		function transition_in(block, local) {
			if (block && block.i) {
				outroing.delete(block);
				block.i(local);
			}
		}
		function transition_out(block, local, detach, callback) {
			if (block && block.o) {
				if (outroing.has(block))
					return;
				outroing.add(block);
				outros.c.push(() => {
					outroing.delete(block);
					if (callback) {
						if (detach)
							block.d(1);
						callback();
					}
				});
				block.o(local);
			}
		}

		const globals = (typeof window !== 'undefined'
				? window
				: typeof globalThis !== 'undefined'
						? globalThis
						: global);

		function destroy_block(block, lookup) {
			block.d(1);
			lookup.delete(block.key);
		}
		function update_keyed_each(old_blocks, dirty, get_key, dynamic, ctx, list, lookup, node, destroy, create_each_block, next, get_context) {
			let o = old_blocks.length;
			let n = list.length;
			let i = o;
			const old_indexes = {};
			while (i--)
				old_indexes[old_blocks[i].key] = i;
			const new_blocks = [];
			const new_lookup = new Map();
			const deltas = new Map();
			i = n;
			while (i--) {
				const child_ctx = get_context(ctx, list, i);
				const key = get_key(child_ctx);
				let block = lookup.get(key);
				if (!block) {
					block = create_each_block(key, child_ctx);
					block.c();
				}
				else if (dynamic) {
					block.p(child_ctx, dirty);
				}
				new_lookup.set(key, new_blocks[i] = block);
				if (key in old_indexes)
					deltas.set(key, Math.abs(i - old_indexes[key]));
			}
			const will_move = new Set();
			const did_move = new Set();
			function insert(block) {
				transition_in(block, 1);
				block.m(node, next);
				lookup.set(block.key, block);
				next = block.first;
				n--;
			}
			while (o && n) {
				const new_block = new_blocks[n - 1];
				const old_block = old_blocks[o - 1];
				const new_key = new_block.key;
				const old_key = old_block.key;
				if (new_block === old_block) {
					// do nothing
					next = new_block.first;
					o--;
					n--;
				}
				else if (!new_lookup.has(old_key)) {
					// remove old block
					destroy(old_block, lookup);
					o--;
				}
				else if (!lookup.has(new_key) || will_move.has(new_key)) {
					insert(new_block);
				}
				else if (did_move.has(old_key)) {
					o--;
				}
				else if (deltas.get(new_key) > deltas.get(old_key)) {
					did_move.add(new_key);
					insert(new_block);
				}
				else {
					will_move.add(old_key);
					o--;
				}
			}
			while (o--) {
				const old_block = old_blocks[o];
				if (!new_lookup.has(old_block.key))
					destroy(old_block, lookup);
			}
			while (n)
				insert(new_blocks[n - 1]);
			return new_blocks;
		}
		function validate_each_keys(ctx, list, get_context, get_key) {
			const keys = new Set();
			for (let i = 0; i < list.length; i++) {
				const key = get_key(get_context(ctx, list, i));
				if (keys.has(key)) {
					throw new Error('Cannot have duplicate keys in a keyed each');
				}
				keys.add(key);
			}
		}
		function create_component(block) {
			block && block.c();
		}
		function mount_component(component, target, anchor, customElement) {
			const { fragment, on_mount, on_destroy, after_update } = component.$$;
			fragment && fragment.m(target, anchor);
			if (!customElement) {
				// onMount happens before the initial afterUpdate
				add_render_callback(() => {
					const new_on_destroy = on_mount.map(run).filter(is_function);
					if (on_destroy) {
						on_destroy.push(...new_on_destroy);
					}
					else {
						// Edge case - component was destroyed immediately,
						// most likely as a result of a binding initialising
						run_all(new_on_destroy);
					}
					component.$$.on_mount = [];
				});
			}
			after_update.forEach(add_render_callback);
		}
		function destroy_component(component, detaching) {
			const $$ = component.$$;
			if ($$.fragment !== null) {
				run_all($$.on_destroy);
				$$.fragment && $$.fragment.d(detaching);
				// TODO null out other refs, including component.$$ (but need to
				// preserve final state?)
				$$.on_destroy = $$.fragment = null;
				$$.ctx = [];
			}
		}
		function make_dirty(component, i) {
			if (component.$$.dirty[0] === -1) {
				dirty_components.push(component);
				schedule_update();
				component.$$.dirty.fill(0);
			}
			component.$$.dirty[(i / 31) | 0] |= (1 << (i % 31));
		}
		function init(component, options, instance, create_fragment, not_equal, props, append_styles, dirty = [-1]) {
			const parent_component = current_component;
			set_current_component(component);
			const $$ = component.$$ = {
				fragment: null,
				ctx: null,
				// state
				props,
				update: noop,
				not_equal,
				bound: blank_object(),
				// lifecycle
				on_mount: [],
				on_destroy: [],
				on_disconnect: [],
				before_update: [],
				after_update: [],
				context: new Map(options.context || (parent_component ? parent_component.$$.context : [])),
				// everything else
				callbacks: blank_object(),
				dirty,
				skip_bound: false,
				root: options.target || parent_component.$$.root
			};
			append_styles && append_styles($$.root);
			let ready = false;
			$$.ctx = instance
					? instance(component, options.props || {}, (i, ret, ...rest) => {
						const value = rest.length ? rest[0] : ret;
						if ($$.ctx && not_equal($$.ctx[i], $$.ctx[i] = value)) {
							if (!$$.skip_bound && $$.bound[i])
								$$.bound[i](value);
							if (ready)
								make_dirty(component, i);
						}
						return ret;
					})
					: [];
			$$.update();
			ready = true;
			run_all($$.before_update);
			// `false` as a special case of no DOM component
			$$.fragment = create_fragment ? create_fragment($$.ctx) : false;
			if (options.target) {
				if (options.hydrate) {
					const nodes = children(options.target);
					// eslint-disable-next-line @typescript-eslint/no-non-null-assertion
					$$.fragment && $$.fragment.l(nodes);
					nodes.forEach(detach);
				}
				else {
					// eslint-disable-next-line @typescript-eslint/no-non-null-assertion
					$$.fragment && $$.fragment.c();
				}
				if (options.intro)
					transition_in(component.$$.fragment);
				mount_component(component, options.target, options.anchor, options.customElement);
				flush();
			}
			set_current_component(parent_component);
		}
		/**
		 * Base class for Svelte components. Used when dev=false.
		 */
		class SvelteComponent {
			$destroy() {
				destroy_component(this, 1);
				this.$destroy = noop;
			}
			$on(type, callback) {
				const callbacks = (this.$$.callbacks[type] || (this.$$.callbacks[type] = []));
				callbacks.push(callback);
				return () => {
					const index = callbacks.indexOf(callback);
					if (index !== -1)
						callbacks.splice(index, 1);
				};
			}
			$set($$props) {
				if (this.$$set && !is_empty($$props)) {
					this.$$.skip_bound = true;
					this.$$set($$props);
					this.$$.skip_bound = false;
				}
			}
		}

		function dispatch_dev(type, detail) {
			document.dispatchEvent(custom_event(type, Object.assign({ version: '3.48.0' }, detail), { bubbles: true }));
		}
		function append_dev(target, node) {
			dispatch_dev('SvelteDOMInsert', { target, node });
			append(target, node);
		}
		function insert_dev(target, node, anchor) {
			dispatch_dev('SvelteDOMInsert', { target, node, anchor });
			insert(target, node, anchor);
		}
		function detach_dev(node) {
			dispatch_dev('SvelteDOMRemove', { node });
			detach(node);
		}
		function listen_dev(node, event, handler, options, has_prevent_default, has_stop_propagation) {
			const modifiers = options === true ? ['capture'] : options ? Array.from(Object.keys(options)) : [];
			if (has_prevent_default)
				modifiers.push('preventDefault');
			if (has_stop_propagation)
				modifiers.push('stopPropagation');
			dispatch_dev('SvelteDOMAddEventListener', { node, event, handler, modifiers });
			const dispose = listen(node, event, handler, options);
			return () => {
				dispatch_dev('SvelteDOMRemoveEventListener', { node, event, handler, modifiers });
				dispose();
			};
		}
		function attr_dev(node, attribute, value) {
			attr(node, attribute, value);
			if (value == null)
				dispatch_dev('SvelteDOMRemoveAttribute', { node, attribute });
			else
				dispatch_dev('SvelteDOMSetAttribute', { node, attribute, value });
		}
		function prop_dev(node, property, value) {
			node[property] = value;
			dispatch_dev('SvelteDOMSetProperty', { node, property, value });
		}
		function set_data_dev(text, data) {
			data = '' + data;
			if (text.wholeText === data)
				return;
			dispatch_dev('SvelteDOMSetData', { node: text, data });
			text.data = data;
		}
		function validate_each_argument(arg) {
			if (typeof arg !== 'string' && !(arg && typeof arg === 'object' && 'length' in arg)) {
				let msg = '{#each} only iterates over array-like objects.';
				if (typeof Symbol === 'function' && arg && Symbol.iterator in arg) {
					msg += ' You can use a spread to convert this iterable into an array.';
				}
				throw new Error(msg);
			}
		}
		function validate_slots(name, slot, keys) {
			for (const slot_key of Object.keys(slot)) {
				if (!~keys.indexOf(slot_key)) {
					console.warn(`<${name}> received an unexpected slot "${slot_key}".`);
				}
			}
		}
		/**
		 * Base class for Svelte components with some minor dev-enhancements. Used when dev=true.
		 */
		class SvelteComponentDev extends SvelteComponent {
			constructor(options) {
				if (!options || (!options.target && !options.$$inline)) {
					throw new Error("'target' is a required option");
				}
				super();
			}
			$destroy() {
				super.$destroy();
				this.$destroy = () => {
					console.warn('Component was already destroyed'); // eslint-disable-line no-console
				};
			}
			$capture_state() { }
			$inject_state() { }
		}

		const strings = {
			readSettingsError: "Произошла ошибка при считывании настроек",
			graphicsTitle: "Графики",
			measuresTitle: "Измерения",
			maxY: "Mакс. Y",
			maxX: "Mакс. X",
			apply: "Применить",
			fixed: "Фиксировать",
			noData: "нет данных",
			time: "Вермя",
			chartCrosshairValue: "Значение: ",
			chartCrosshairTime: "Время: ",
			timeFormat: "мм:сс.мс",
			server_not_responding: "Сервер приложения не отвечает"
		};

		/* src\components\SidebarSensor.svelte generated by Svelte v3.48.0 */
		const file$4 = "src\\components\\SidebarSensor.svelte";

		function create_fragment$4(ctx) {
			let t0;
			let div4;
			let img;
			let img_src_value;
			let t1;
			let label0;
			let t2;
			let t3;
			let div3;
			let div0;
			let span0;
			let t4;
			let t5;
			let span1;
			let t6;
			let t7;
			let button0;
			let t8;
			let hr;
			let t9;
			let form;
			let div1;
			let label1;
			let t11;
			let input0;
			let t12;
			let div2;
			let label2;
			let t14;
			let input1;
			let t15;
			let button1;
			let mounted;
			let dispose;

			const block = {
				c: function create() {
					t0 = space();
					div4 = element("div");
					img = element("img");
					t1 = space();
					label0 = element("label");
					t2 = text(/*label*/ ctx[7]);
					t3 = space();
					div3 = element("div");
					div0 = element("div");
					span0 = element("span");
					t4 = text(/*value*/ ctx[4]);
					t5 = space();
					span1 = element("span");
					t6 = text(/*unit*/ ctx[5]);
					t7 = space();
					button0 = element("button");
					t8 = space();
					hr = element("hr");
					t9 = space();
					form = element("form");
					div1 = element("div");
					label1 = element("label");
					label1.textContent = `${strings.maxY}`;
					t11 = space();
					input0 = element("input");
					t12 = space();
					div2 = element("div");
					label2 = element("label");
					label2.textContent = `${strings.maxX}`;
					t14 = space();
					input1 = element("input");
					t15 = space();
					button1 = element("button");
					button1.textContent = `${strings.apply}`;
					if (!src_url_equal(img.src, img_src_value = /*icon*/ ctx[6])) attr_dev(img, "src", img_src_value);
					attr_dev(img, "class", "icon svelte-c4be6v");
					add_location(img, file$4, 27, 4, 840);
					attr_dev(label0, "class", "sensor-label svelte-c4be6v");
					add_location(label0, file$4, 28, 4, 877);
					attr_dev(span0, "class", "value svelte-c4be6v");
					add_location(span0, file$4, 33, 12, 1036);
					attr_dev(span1, "class", "unit");
					add_location(span1, file$4, 34, 12, 1084);
					attr_dev(button0, "class", "expander-button svelte-c4be6v");
					add_location(button0, file$4, 35, 12, 1130);
					attr_dev(div0, "class", "expander-header svelte-c4be6v");
					add_location(div0, file$4, 32, 8, 993);
					attr_dev(hr, "class", "expander-hr svelte-c4be6v");
					add_location(hr, file$4, 38, 8, 1256);
					add_location(label1, file$4, 42, 16, 1420);
					attr_dev(input0, "type", "number");
					attr_dev(input0, "min", /*minValue*/ ctx[1]);
					attr_dev(input0, "max", /*max*/ ctx[9]);
					attr_dev(input0, "class", "svelte-c4be6v");
					add_location(input0, file$4, 43, 16, 1467);
					attr_dev(div1, "class", "row min-max svelte-c4be6v");
					add_location(div1, file$4, 41, 12, 1377);
					add_location(label2, file$4, 46, 16, 1612);
					attr_dev(input1, "type", "number");
					attr_dev(input1, "min", /*min*/ ctx[8]);
					attr_dev(input1, "max", /*maxValue*/ ctx[2]);
					attr_dev(input1, "class", "svelte-c4be6v");
					add_location(input1, file$4, 47, 16, 1659);
					attr_dev(div2, "class", "row min-max svelte-c4be6v");
					add_location(div2, file$4, 45, 12, 1569);
					attr_dev(button1, "class", "apply-button svelte-c4be6v");
					add_location(button1, file$4, 49, 12, 1761);
					attr_dev(form, "class", "expander-body svelte-c4be6v");
					add_location(form, file$4, 40, 8, 1292);
					attr_dev(div3, "class", "expander svelte-c4be6v");
					toggle_class(div3, "expander_open", /*expanded*/ ctx[0]);
					add_location(div3, file$4, 30, 4, 928);
					attr_dev(div4, "class", "wrapper svelte-c4be6v");
					toggle_class(div4, "selected", /*selected*/ ctx[3]);
					add_location(div4, file$4, 26, 0, 778);
				},
				l: function claim(nodes) {
					throw new Error("options.hydrate only works if the component was compiled with the `hydratable: true` option");
				},
				m: function mount(target, anchor) {
					insert_dev(target, t0, anchor);
					insert_dev(target, div4, anchor);
					append_dev(div4, img);
					append_dev(div4, t1);
					append_dev(div4, label0);
					append_dev(label0, t2);
					append_dev(div4, t3);
					append_dev(div4, div3);
					append_dev(div3, div0);
					append_dev(div0, span0);
					append_dev(span0, t4);
					append_dev(div0, t5);
					append_dev(div0, span1);
					append_dev(span1, t6);
					append_dev(div0, t7);
					append_dev(div0, button0);
					append_dev(div3, t8);
					append_dev(div3, hr);
					append_dev(div3, t9);
					append_dev(div3, form);
					append_dev(form, div1);
					append_dev(div1, label1);
					append_dev(div1, t11);
					append_dev(div1, input0);
					set_input_value(input0, /*maxValue*/ ctx[2]);
					append_dev(form, t12);
					append_dev(form, div2);
					append_dev(div2, label2);
					append_dev(div2, t14);
					append_dev(div2, input1);
					set_input_value(input1, /*minValue*/ ctx[1]);
					append_dev(form, t15);
					append_dev(form, button1);

					if (!mounted) {
						dispose = [
							listen_dev(button0, "click", stop_propagation(/*click_handler_1*/ ctx[12]), false, false, true),
							listen_dev(input0, "input", /*input0_input_handler*/ ctx[13]),
							listen_dev(input1, "input", /*input1_input_handler*/ ctx[14]),
							listen_dev(button1, "click", /*emitApplyMinMax*/ ctx[10], false, false, false),
							listen_dev(form, "submit", prevent_default(/*emitApplyMinMax*/ ctx[10]), false, true, false),
							listen_dev(div4, "click", /*click_handler*/ ctx[11], false, false, false)
						];

						mounted = true;
					}
				},
				p: function update(ctx, [dirty]) {
					if (dirty & /*icon*/ 64 && !src_url_equal(img.src, img_src_value = /*icon*/ ctx[6])) {
						attr_dev(img, "src", img_src_value);
					}

					if (dirty & /*label*/ 128) set_data_dev(t2, /*label*/ ctx[7]);
					if (dirty & /*value*/ 16) set_data_dev(t4, /*value*/ ctx[4]);
					if (dirty & /*unit*/ 32) set_data_dev(t6, /*unit*/ ctx[5]);

					if (dirty & /*minValue*/ 2) {
						attr_dev(input0, "min", /*minValue*/ ctx[1]);
					}

					if (dirty & /*maxValue*/ 4 && to_number(input0.value) !== /*maxValue*/ ctx[2]) {
						set_input_value(input0, /*maxValue*/ ctx[2]);
					}

					if (dirty & /*maxValue*/ 4) {
						attr_dev(input1, "max", /*maxValue*/ ctx[2]);
					}

					if (dirty & /*minValue*/ 2 && to_number(input1.value) !== /*minValue*/ ctx[1]) {
						set_input_value(input1, /*minValue*/ ctx[1]);
					}

					if (dirty & /*expanded*/ 1) {
						toggle_class(div3, "expander_open", /*expanded*/ ctx[0]);
					}

					if (dirty & /*selected*/ 8) {
						toggle_class(div4, "selected", /*selected*/ ctx[3]);
					}
				},
				i: noop,
				o: noop,
				d: function destroy(detaching) {
					if (detaching) detach_dev(t0);
					if (detaching) detach_dev(div4);
					mounted = false;
					run_all(dispose);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_fragment$4.name,
				type: "component",
				source: "",
				ctx
			});

			return block;
		}

		function instance$4($$self, $$props, $$invalidate) {
			let { $$slots: slots = {}, $$scope } = $$props;
			validate_slots('SidebarSensor', slots, []);
			let { expanded = false } = $$props;
			let { selected = false } = $$props;
			let { value = 0 } = $$props;
			let { unit = "у.е." } = $$props;
			let { minValue = 0 } = $$props;
			let { maxValue = 0 } = $$props;
			let { icon = "/img/sensors/Amper.png" } = $$props;
			let { label = "Датчик" } = $$props;
			const min = minValue;
			const max = maxValue;
			const eventDispatcher = createEventDispatcher();

			function emitApplyMinMax() {
				if (minValue < min) $$invalidate(1, minValue = min);
				if (maxValue > max) $$invalidate(2, maxValue = max);
				if (minValue > maxValue) $$invalidate(1, minValue = maxValue);
				eventDispatcher('applyMinMax', { min: minValue, max: maxValue });
			}

			const writable_props = [
				'expanded',
				'selected',
				'value',
				'unit',
				'minValue',
				'maxValue',
				'icon',
				'label'
			];

			Object.keys($$props).forEach(key => {
				if (!~writable_props.indexOf(key) && key.slice(0, 2) !== '$$' && key !== 'slot') console.warn(`<SidebarSensor> was created with unknown prop '${key}'`);
			});

			function click_handler(event) {
				bubble.call(this, $$self, event);
			}

			const click_handler_1 = () => {
				$$invalidate(0, expanded = !expanded);
			};

			function input0_input_handler() {
				maxValue = to_number(this.value);
				$$invalidate(2, maxValue);
			}

			function input1_input_handler() {
				minValue = to_number(this.value);
				$$invalidate(1, minValue);
			}

			$$self.$$set = $$props => {
				if ('expanded' in $$props) $$invalidate(0, expanded = $$props.expanded);
				if ('selected' in $$props) $$invalidate(3, selected = $$props.selected);
				if ('value' in $$props) $$invalidate(4, value = $$props.value);
				if ('unit' in $$props) $$invalidate(5, unit = $$props.unit);
				if ('minValue' in $$props) $$invalidate(1, minValue = $$props.minValue);
				if ('maxValue' in $$props) $$invalidate(2, maxValue = $$props.maxValue);
				if ('icon' in $$props) $$invalidate(6, icon = $$props.icon);
				if ('label' in $$props) $$invalidate(7, label = $$props.label);
			};

			$$self.$capture_state = () => ({
				strings,
				createEventDispatcher,
				expanded,
				selected,
				value,
				unit,
				minValue,
				maxValue,
				icon,
				label,
				min,
				max,
				eventDispatcher,
				emitApplyMinMax
			});

			$$self.$inject_state = $$props => {
				if ('expanded' in $$props) $$invalidate(0, expanded = $$props.expanded);
				if ('selected' in $$props) $$invalidate(3, selected = $$props.selected);
				if ('value' in $$props) $$invalidate(4, value = $$props.value);
				if ('unit' in $$props) $$invalidate(5, unit = $$props.unit);
				if ('minValue' in $$props) $$invalidate(1, minValue = $$props.minValue);
				if ('maxValue' in $$props) $$invalidate(2, maxValue = $$props.maxValue);
				if ('icon' in $$props) $$invalidate(6, icon = $$props.icon);
				if ('label' in $$props) $$invalidate(7, label = $$props.label);
			};

			if ($$props && "$$inject" in $$props) {
				$$self.$inject_state($$props.$$inject);
			}

			return [
				expanded,
				minValue,
				maxValue,
				selected,
				value,
				unit,
				icon,
				label,
				min,
				max,
				emitApplyMinMax,
				click_handler,
				click_handler_1,
				input0_input_handler,
				input1_input_handler
			];
		}

		class SidebarSensor extends SvelteComponentDev {
			constructor(options) {
				super(options);

				init(this, options, instance$4, create_fragment$4, safe_not_equal, {
					expanded: 0,
					selected: 3,
					value: 4,
					unit: 5,
					minValue: 1,
					maxValue: 2,
					icon: 6,
					label: 7
				});

				dispatch_dev("SvelteRegisterComponent", {
					component: this,
					tagName: "SidebarSensor",
					options,
					id: create_fragment$4.name
				});
			}

			get expanded() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set expanded(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get selected() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set selected(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get value() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set value(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get unit() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set unit(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get minValue() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set minValue(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get maxValue() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set maxValue(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get icon() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set icon(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get label() {
				throw new Error("<SidebarSensor>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set label(value) {
				throw new Error("<SidebarSensor>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}
		}

		//данный лист заполняется согласно ListBox Sensors_select
		var SensorType;
		(function (SensorType) {
			SensorType[SensorType["TempSensor"] = 0] = "TempSensor";
			SensorType[SensorType["AbsolutePressureSensor"] = 1] = "AbsolutePressureSensor";
			SensorType[SensorType["TeslameterSensor"] = 2] = "TeslameterSensor";
			SensorType[SensorType["VoltmeterSensor"] = 3] = "VoltmeterSensor";
			SensorType[SensorType["AmpermetrSensor"] = 4] = "AmpermetrSensor";
			SensorType[SensorType["AccelerometerXSensor"] = 5] = "AccelerometerXSensor";
			SensorType[SensorType["AccelerometerYSensor"] = 6] = "AccelerometerYSensor";
			SensorType[SensorType["AccelerometerZSensor"] = 7] = "AccelerometerZSensor";
			SensorType[SensorType["ElectricalConductivitySensor"] = 8] = "ElectricalConductivitySensor";
			SensorType[SensorType["HumiditySensor"] = 9] = "HumiditySensor";
			SensorType[SensorType["LightSensor"] = 10] = "LightSensor";
			SensorType[SensorType["TempOutsideSensor"] = 11] = "TempOutsideSensor";
			SensorType[SensorType["ColorimeterSensor"] = 12] = "ColorimeterSensor";
			SensorType[SensorType["PhSensor"] = 13] = "PhSensor";
		})(SensorType || (SensorType = {}));

		class SensorMode {
			constructor(minValue, maxValue, unit) {
				this.minValue = minValue;
				this.maxValue = maxValue;
				this.unit = unit;
			}
		}
		SensorMode.Disabled = new SensorMode(0, 0, '');
		const SENSORS_PREFERENCES = new Map([
			[SensorType.TempSensor, {
				accuracy: 1,
				name: "Датчик T эксп.",
				ico: "/img/sensors/Temp_1.png",
				modes: [
					new SensorMode(-40, 165, "°С"),
				]
			}],
			[SensorType.AbsolutePressureSensor, {
				accuracy: 1,
				name: "Датчик P абс.",
				ico: "/img/sensors/Pressure.png",
				modes: [
					new SensorMode(0, 500, "кПа"),
				]
			}],
			[SensorType.TeslameterSensor, {
				accuracy: 1,
				name: "Тесламетр",
				ico: "/img/sensors/Tesla.png",
				modes: [
					new SensorMode(-100, 100, "мЛт"),
				]
			}],
			[SensorType.VoltmeterSensor, {
				accuracy: 3,
				name: "Вольтметр",
				ico: "/img/sensors/Voltage.png",
				modes: [
					new SensorMode(-15, 15, "В"),
				]
			}],
			[SensorType.AmpermetrSensor, {
				accuracy: 3,
				name: "Амперметр",
				ico: "/img/sensors/Amper.png",
				modes: [
					new SensorMode(-1, 1, "A"),
				]
			}],
			[SensorType.AccelerometerXSensor, {
				accuracy: 3,
				name: "Датчик ускорения. Ось Х",
				ico: "/img/sensors/Humidity.png",
				modes: [
					new SensorMode(-2, 2, "g"),
					new SensorMode(-4, 4, "g"),
					new SensorMode(-8, 8, "g"),
					new SensorMode(-16, 16, "g"),
				]
			}],
			[SensorType.AccelerometerYSensor, {
				accuracy: 3,
				name: "Датчик ускорения. Ось Y",
				ico: "/img/sensors/Illumination.png",
				modes: [
					new SensorMode(-2, 2, "g"),
					new SensorMode(-4, 4, "g"),
					new SensorMode(-8, 8, "g"),
					new SensorMode(-16, 16, "g"),
				]
			}],
			[SensorType.AccelerometerZSensor, {
				accuracy: 3,
				name: "Датчик ускорения. Ось Z",
				ico: "/img/sensors/Temp_2.png",
				modes: [
					new SensorMode(-2, 2, "g"),
					new SensorMode(-4, 4, "g"),
					new SensorMode(-8, 8, "g"),
					new SensorMode(-16, 16, "g"),
				]
			}],
			[SensorType.ElectricalConductivitySensor, {
				accuracy: 1,
				name: "Датчик электропроводимости",
				ico: "/img/sensors/Colorimeter.png",
				modes: [
					SensorMode.Disabled,
					new SensorMode(0, 200, "мкСм/см"),
					new SensorMode(0, 2000, "мкСм/см"),
					new SensorMode(0, 20000, "мкСм/см"),
				]
			}],
			[SensorType.HumiditySensor, {
				accuracy: 1,
				name: "Датчик влажности",
				ico: "/img/sensors/pH.png",
				modes: [
					new SensorMode(0, 100, "%"),
				]
			}],
			[SensorType.LightSensor, {
				accuracy: 0,
				name: "Датчик освещенности",
				ico: "/img/sensors/Accelerometr.png",
				modes: [
					new SensorMode(0, 180000, "лк"),
				]
			}],
			[SensorType.TempOutsideSensor, {
				accuracy: 1,
				name: "Датчик Т окр.",
				ico: "/img/sensors/Accelerometr.png",
				modes: [
					new SensorMode(-40, 60, "°С"),
				]
			}],
			[SensorType.ColorimeterSensor, {
				accuracy: 2,
				name: "Колориметр",
				ico: "/img/sensors/Accelerometr.png",
				modes: [
					new SensorMode(0, 2, "D"),
				]
			}],
			[SensorType.PhSensor, {
				accuracy: 2,
				name: "Датчик pH",
				ico: "/img/sensors/Electrical_conduct.png",
				modes: [
					new SensorMode(0, 14, "pH"),
				]
			}],
		]);

		class Sensor {
			constructor(lab, sensorType) {
				this.lab = lab;
				this.sensorType = sensorType;
				this.selectedModeIdx = 0;
				this.markerColor = "red";
				this.markerSize = 1;
				this.lineColor = "red";
				this.lineSize = 3;
				const preferences = SENSORS_PREFERENCES.get(sensorType);
				this.modes = preferences.modes;
				this.name = preferences.name;
				this.ico = preferences.ico;
				this.accuracy = preferences.accuracy;
				if (this.modes.length === 0)
					throw new Error("modes must contains a least one element");
			}
			get mode() {
				return this.modes[this.selectedModeIdx];
			}
			set mode(mode) {
				const idx = this.modes.indexOf(mode);
				if (idx === -1)
					return;
				if (this.modes.length > 0) {
					this.lab.setMode(this.sensorType, idx);
				}
				this.selectedModeIdx = idx;
			}
			getLastValue() {
				const value = this.lab.getValue(this.sensorType);
				console.log(value);
				if (isNaN(value) || value == null)
					return null;
				return Math.floor(value * (this.accuracy + 1)) / (this.accuracy + 1);
			}
		}

		/* src\components\SensorsTable.svelte generated by Svelte v3.48.0 */

		const file$3 = "src\\components\\SensorsTable.svelte";

		function get_each_context$1(ctx, list, i) {
			const child_ctx = ctx.slice();
			child_ctx[8] = list[i];
			return child_ctx;
		}

		function get_each_context_1$1(ctx, list, i) {
			const child_ctx = ctx.slice();
			child_ctx[11] = list[i];
			return child_ctx;
		}

		function get_each_context_2(ctx, list, i) {
			const child_ctx = ctx.slice();
			child_ctx[14] = list[i];
			return child_ctx;
		}

		// (34:16) {#each headers as header}
		function create_each_block_2(ctx) {
			let td;
			let t_value = /*header*/ ctx[14] + "";
			let t;

			const block = {
				c: function create() {
					td = element("td");
					t = text(t_value);
					attr_dev(td, "class", "svelte-1d93054");
					add_location(td, file$3, 34, 20, 737);
				},
				m: function mount(target, anchor) {
					insert_dev(target, td, anchor);
					append_dev(td, t);
				},
				p: function update(ctx, dirty) {
					if (dirty & /*headers*/ 2 && t_value !== (t_value = /*header*/ ctx[14] + "")) set_data_dev(t, t_value);
				},
				d: function destroy(detaching) {
					if (detaching) detach_dev(td);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_each_block_2.name,
				type: "each",
				source: "(34:16) {#each headers as header}",
				ctx
			});

			return block;
		}

		// (42:20) {#each row as col}
		function create_each_block_1$1(ctx) {
			let td;
			let t_value = /*col*/ ctx[11] + "";
			let t;

			const block = {
				c: function create() {
					td = element("td");
					t = text(t_value);
					attr_dev(td, "class", "svelte-1d93054");
					add_location(td, file$3, 42, 24, 971);
				},
				m: function mount(target, anchor) {
					insert_dev(target, td, anchor);
					append_dev(td, t);
				},
				p: function update(ctx, dirty) {
					if (dirty & /*rows*/ 1 && t_value !== (t_value = /*col*/ ctx[11] + "")) set_data_dev(t, t_value);
				},
				d: function destroy(detaching) {
					if (detaching) detach_dev(td);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_each_block_1$1.name,
				type: "each",
				source: "(42:20) {#each row as col}",
				ctx
			});

			return block;
		}

		// (40:12) {#each rows as row (row[0])}
		function create_each_block$1(key_1, ctx) {
			let tr;
			let t;
			let each_value_1 = /*row*/ ctx[8];
			validate_each_argument(each_value_1);
			let each_blocks = [];

			for (let i = 0; i < each_value_1.length; i += 1) {
				each_blocks[i] = create_each_block_1$1(get_each_context_1$1(ctx, each_value_1, i));
			}

			const block = {
				key: key_1,
				first: null,
				c: function create() {
					tr = element("tr");

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].c();
					}

					t = space();
					attr_dev(tr, "class", "svelte-1d93054");
					add_location(tr, file$3, 40, 16, 901);
					this.first = tr;
				},
				m: function mount(target, anchor) {
					insert_dev(target, tr, anchor);

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].m(tr, null);
					}

					append_dev(tr, t);
				},
				p: function update(new_ctx, dirty) {
					ctx = new_ctx;

					if (dirty & /*rows*/ 1) {
						each_value_1 = /*row*/ ctx[8];
						validate_each_argument(each_value_1);
						let i;

						for (i = 0; i < each_value_1.length; i += 1) {
							const child_ctx = get_each_context_1$1(ctx, each_value_1, i);

							if (each_blocks[i]) {
								each_blocks[i].p(child_ctx, dirty);
							} else {
								each_blocks[i] = create_each_block_1$1(child_ctx);
								each_blocks[i].c();
								each_blocks[i].m(tr, t);
							}
						}

						for (; i < each_blocks.length; i += 1) {
							each_blocks[i].d(1);
						}

						each_blocks.length = each_value_1.length;
					}
				},
				d: function destroy(detaching) {
					if (detaching) detach_dev(tr);
					destroy_each(each_blocks, detaching);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_each_block$1.name,
				type: "each",
				source: "(40:12) {#each rows as row (row[0])}",
				ctx
			});

			return block;
		}

		function create_fragment$3(ctx) {
			let div1;
			let div0;
			let table;
			let thead;
			let tr;
			let t;
			let tbody;
			let each_blocks = [];
			let each1_lookup = new Map();
			let each_value_2 = /*headers*/ ctx[1];
			validate_each_argument(each_value_2);
			let each_blocks_1 = [];

			for (let i = 0; i < each_value_2.length; i += 1) {
				each_blocks_1[i] = create_each_block_2(get_each_context_2(ctx, each_value_2, i));
			}

			let each_value = /*rows*/ ctx[0];
			validate_each_argument(each_value);
			const get_key = ctx => /*row*/ ctx[8][0];
			validate_each_keys(ctx, each_value, get_each_context$1, get_key);

			for (let i = 0; i < each_value.length; i += 1) {
				let child_ctx = get_each_context$1(ctx, each_value, i);
				let key = get_key(child_ctx);
				each1_lookup.set(key, each_blocks[i] = create_each_block$1(key, child_ctx));
			}

			const block = {
				c: function create() {
					div1 = element("div");
					div0 = element("div");
					table = element("table");
					thead = element("thead");
					tr = element("tr");

					for (let i = 0; i < each_blocks_1.length; i += 1) {
						each_blocks_1[i].c();
					}

					t = space();
					tbody = element("tbody");

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].c();
					}

					attr_dev(tr, "class", "svelte-1d93054");
					add_location(tr, file$3, 32, 12, 668);
					attr_dev(thead, "class", "svelte-1d93054");
					add_location(thead, file$3, 31, 12, 647);
					attr_dev(tbody, "class", "svelte-1d93054");
					add_location(tbody, file$3, 38, 12, 834);
					attr_dev(table, "class", "svelte-1d93054");
					add_location(table, file$3, 30, 8, 626);
					attr_dev(div0, "class", "scroll svelte-1d93054");
					add_location(div0, file$3, 28, 4, 594);
					attr_dev(div1, "class", "table-wrapper svelte-1d93054");
					toggle_class(div1, "hidden", !/*isVisible*/ ctx[2]);
					add_location(div1, file$3, 27, 0, 535);
				},
				l: function claim(nodes) {
					throw new Error("options.hydrate only works if the component was compiled with the `hydratable: true` option");
				},
				m: function mount(target, anchor) {
					insert_dev(target, div1, anchor);
					append_dev(div1, div0);
					append_dev(div0, table);
					append_dev(table, thead);
					append_dev(thead, tr);

					for (let i = 0; i < each_blocks_1.length; i += 1) {
						each_blocks_1[i].m(tr, null);
					}

					append_dev(table, t);
					append_dev(table, tbody);

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].m(tbody, null);
					}
				},
				p: function update(ctx, [dirty]) {
					if (dirty & /*headers*/ 2) {
						each_value_2 = /*headers*/ ctx[1];
						validate_each_argument(each_value_2);
						let i;

						for (i = 0; i < each_value_2.length; i += 1) {
							const child_ctx = get_each_context_2(ctx, each_value_2, i);

							if (each_blocks_1[i]) {
								each_blocks_1[i].p(child_ctx, dirty);
							} else {
								each_blocks_1[i] = create_each_block_2(child_ctx);
								each_blocks_1[i].c();
								each_blocks_1[i].m(tr, null);
							}
						}

						for (; i < each_blocks_1.length; i += 1) {
							each_blocks_1[i].d(1);
						}

						each_blocks_1.length = each_value_2.length;
					}

					if (dirty & /*rows*/ 1) {
						each_value = /*rows*/ ctx[0];
						validate_each_argument(each_value);
						validate_each_keys(ctx, each_value, get_each_context$1, get_key);
						each_blocks = update_keyed_each(each_blocks, dirty, get_key, 1, ctx, each_value, each1_lookup, tbody, destroy_block, create_each_block$1, null, get_each_context$1);
					}

					if (dirty & /*isVisible*/ 4) {
						toggle_class(div1, "hidden", !/*isVisible*/ ctx[2]);
					}
				},
				i: noop,
				o: noop,
				d: function destroy(detaching) {
					if (detaching) detach_dev(div1);
					destroy_each(each_blocks_1, detaching);

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].d();
					}
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_fragment$3.name,
				type: "component",
				source: "",
				ctx
			});

			return block;
		}

		function instance$3($$self, $$props, $$invalidate) {
			let { $$slots: slots = {}, $$scope } = $$props;
			validate_slots('SensorsTable', slots, []);
			let { rows = [] } = $$props;
			let { headers = [] } = $$props;
			let { isVisible = true } = $$props;

			// Internal
			let tempRows = [];

			let paused = false;

			function addRow(newRow) {
				if (paused) tempRows.push(newRow); else $$invalidate(0, rows = [newRow, ...rows]);
			}

			function pause() {
				paused = true;
			}

			function start() {
				$$invalidate(0, rows = [...tempRows.reverse(), ...rows]);
				tempRows = [];
				paused = false;
			}

			const writable_props = ['rows', 'headers', 'isVisible'];

			Object.keys($$props).forEach(key => {
				if (!~writable_props.indexOf(key) && key.slice(0, 2) !== '$$' && key !== 'slot') console.warn(`<SensorsTable> was created with unknown prop '${key}'`);
			});

			$$self.$$set = $$props => {
				if ('rows' in $$props) $$invalidate(0, rows = $$props.rows);
				if ('headers' in $$props) $$invalidate(1, headers = $$props.headers);
				if ('isVisible' in $$props) $$invalidate(2, isVisible = $$props.isVisible);
			};

			$$self.$capture_state = () => ({
				rows,
				headers,
				isVisible,
				tempRows,
				paused,
				addRow,
				pause,
				start
			});

			$$self.$inject_state = $$props => {
				if ('rows' in $$props) $$invalidate(0, rows = $$props.rows);
				if ('headers' in $$props) $$invalidate(1, headers = $$props.headers);
				if ('isVisible' in $$props) $$invalidate(2, isVisible = $$props.isVisible);
				if ('tempRows' in $$props) tempRows = $$props.tempRows;
				if ('paused' in $$props) paused = $$props.paused;
			};

			if ($$props && "$$inject" in $$props) {
				$$self.$inject_state($$props.$$inject);
			}

			return [rows, headers, isVisible, addRow, pause, start];
		}

		class SensorsTable extends SvelteComponentDev {
			constructor(options) {
				super(options);

				init(this, options, instance$3, create_fragment$3, safe_not_equal, {
					rows: 0,
					headers: 1,
					isVisible: 2,
					addRow: 3,
					pause: 4,
					start: 5
				});

				dispatch_dev("SvelteRegisterComponent", {
					component: this,
					tagName: "SensorsTable",
					options,
					id: create_fragment$3.name
				});
			}

			get rows() {
				throw new Error("<SensorsTable>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set rows(value) {
				throw new Error("<SensorsTable>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get headers() {
				throw new Error("<SensorsTable>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set headers(value) {
				throw new Error("<SensorsTable>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get isVisible() {
				throw new Error("<SensorsTable>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set isVisible(value) {
				throw new Error("<SensorsTable>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get addRow() {
				return this.$$.ctx[3];
			}

			set addRow(value) {
				throw new Error("<SensorsTable>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get pause() {
				return this.$$.ctx[4];
			}

			set pause(value) {
				throw new Error("<SensorsTable>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get start() {
				return this.$$.ctx[5];
			}

			set start(value) {
				throw new Error("<SensorsTable>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}
		}

		function msToString(timeMs) {
			return `${Math.floor(timeMs / 1000 / 60)}:${Math.floor((timeMs / 1000) % 60)}.${timeMs % 1000}`;
		}

		var defaultBindingOptions = {
			allowDownsampling: true,
		};
		function bindToDevicePixelRatio(canvas, options) {
			if (options === void 0) { options = defaultBindingOptions; }
			return new DevicePixelRatioBinding(canvas, options);
		}
		var DevicePixelRatioBinding = /** @class */ (function () {
			function DevicePixelRatioBinding(canvas, options) {
				var _this = this;
				this._resolutionMediaQueryList = null;
				this._resolutionListener = function (ev) { return _this._onResolutionChanged(); };
				this._canvasConfiguredListeners = [];
				this.canvas = canvas;
				this._canvasSize = {
					width: this.canvas.clientWidth,
					height: this.canvas.clientHeight,
				};
				this._options = options;
				this._configureCanvas();
				this._installResolutionListener();
			}
			DevicePixelRatioBinding.prototype.destroy = function () {
				this._canvasConfiguredListeners.length = 0;
				this._uninstallResolutionListener();
				this.canvas = null;
			};
			Object.defineProperty(DevicePixelRatioBinding.prototype, "canvasSize", {
				get: function () {
					return {
						width: this._canvasSize.width,
						height: this._canvasSize.height,
					};
				},
				enumerable: true,
				configurable: true
			});
			DevicePixelRatioBinding.prototype.resizeCanvas = function (size) {
				this._canvasSize = {
					width: size.width,
					height: size.height,
				};
				this._configureCanvas();
			};
			Object.defineProperty(DevicePixelRatioBinding.prototype, "pixelRatio", {
				get: function () {
					// According to DOM Level 2 Core specification, ownerDocument should never be null for HTMLCanvasElement
					// see https://www.w3.org/TR/2000/REC-DOM-Level-2-Core-20001113/core.html#node-ownerDoc
					var win = this.canvas.ownerDocument.defaultView;
					if (win == null) {
						throw new Error('No window is associated with the canvas');
					}
					return win.devicePixelRatio > 1 || this._options.allowDownsampling ? win.devicePixelRatio : 1;
				},
				enumerable: true,
				configurable: true
			});
			DevicePixelRatioBinding.prototype.subscribeCanvasConfigured = function (listener) {
				this._canvasConfiguredListeners.push(listener);
			};
			DevicePixelRatioBinding.prototype.unsubscribeCanvasConfigured = function (listener) {
				this._canvasConfiguredListeners = this._canvasConfiguredListeners.filter(function (l) { return l != listener; });
			};
			DevicePixelRatioBinding.prototype._configureCanvas = function () {
				var ratio = this.pixelRatio;
				this.canvas.style.width = this._canvasSize.width + "px";
				this.canvas.style.height = this._canvasSize.height + "px";
				this.canvas.width = this._canvasSize.width * ratio;
				this.canvas.height = this._canvasSize.height * ratio;
				this._emitCanvasConfigured();
			};
			DevicePixelRatioBinding.prototype._emitCanvasConfigured = function () {
				var _this = this;
				this._canvasConfiguredListeners.forEach(function (listener) { return listener.call(_this); });
			};
			DevicePixelRatioBinding.prototype._installResolutionListener = function () {
				if (this._resolutionMediaQueryList !== null) {
					throw new Error('Resolution listener is already installed');
				}
				// According to DOM Level 2 Core specification, ownerDocument should never be null for HTMLCanvasElement
				// see https://www.w3.org/TR/2000/REC-DOM-Level-2-Core-20001113/core.html#node-ownerDoc
				var win = this.canvas.ownerDocument.defaultView;
				if (win == null) {
					throw new Error('No window is associated with the canvas');
				}
				var dppx = win.devicePixelRatio;
				this._resolutionMediaQueryList = win.matchMedia("all and (resolution: " + dppx + "dppx)");
				// IE and some versions of Edge do not support addEventListener/removeEventListener, and we are going to use the deprecated addListener/removeListener
				this._resolutionMediaQueryList.addListener(this._resolutionListener);
			};
			DevicePixelRatioBinding.prototype._uninstallResolutionListener = function () {
				if (this._resolutionMediaQueryList !== null) {
					// IE and some versions of Edge do not support addEventListener/removeEventListener, and we are going to use the deprecated addListener/removeListener
					this._resolutionMediaQueryList.removeListener(this._resolutionListener);
					this._resolutionMediaQueryList = null;
				}
			};
			DevicePixelRatioBinding.prototype._reinstallResolutionListener = function () {
				this._uninstallResolutionListener();
				this._installResolutionListener();
			};
			DevicePixelRatioBinding.prototype._onResolutionChanged = function () {
				this._configureCanvas();
				this._reinstallResolutionListener();
			};
			return DevicePixelRatioBinding;
		}());

		/*!
     * @license
     * TradingView Lightweight Charts v3.8.0
     * Copyright (c) 2020 TradingView, Inc.
     * Licensed under Apache License 2.0 https://www.apache.org/licenses/LICENSE-2.0
     */
		var i,n;function s(t,i){var n,s=((n={})[0]=[],n[1]=[t.lineWidth,t.lineWidth],n[2]=[2*t.lineWidth,2*t.lineWidth],n[3]=[6*t.lineWidth,6*t.lineWidth],n[4]=[t.lineWidth,4*t.lineWidth],n)[i];t.setLineDash(s);}function h(t,i,n,s){t.beginPath();var h=t.lineWidth%2?.5:0;t.moveTo(n,i+h),t.lineTo(s,i+h),t.stroke();}function r(t,i){if(!t)throw new Error("Assertion failed"+(i?": "+i:""))}function e(t){if(void 0===t)throw new Error("Value is undefined");return t}function u(t){if(null===t)throw new Error("Value is null");return t}function a(t){return u(e(t))}!function(t){t[t.Simple=0]="Simple",t[t.WithSteps=1]="WithSteps";}(i||(i={})),function(t){t[t.Solid=0]="Solid",t[t.Dotted=1]="Dotted",t[t.Dashed=2]="Dashed",t[t.LargeDashed=3]="LargeDashed",t[t.SparseDotted=4]="SparseDotted";}(n||(n={}));var o={khaki:"#f0e68c",azure:"#f0ffff",aliceblue:"#f0f8ff",ghostwhite:"#f8f8ff",gold:"#ffd700",goldenrod:"#daa520",gainsboro:"#dcdcdc",gray:"#808080",green:"#008000",honeydew:"#f0fff0",floralwhite:"#fffaf0",lightblue:"#add8e6",lightcoral:"#f08080",lemonchiffon:"#fffacd",hotpink:"#ff69b4",lightyellow:"#ffffe0",greenyellow:"#adff2f",lightgoldenrodyellow:"#fafad2",limegreen:"#32cd32",linen:"#faf0e6",lightcyan:"#e0ffff",magenta:"#f0f",maroon:"#800000",olive:"#808000",orange:"#ffa500",oldlace:"#fdf5e6",mediumblue:"#0000cd",transparent:"#0000",lime:"#0f0",lightpink:"#ffb6c1",mistyrose:"#ffe4e1",moccasin:"#ffe4b5",midnightblue:"#191970",orchid:"#da70d6",mediumorchid:"#ba55d3",mediumturquoise:"#48d1cc",orangered:"#ff4500",royalblue:"#4169e1",powderblue:"#b0e0e6",red:"#f00",coral:"#ff7f50",turquoise:"#40e0d0",white:"#fff",whitesmoke:"#f5f5f5",wheat:"#f5deb3",teal:"#008080",steelblue:"#4682b4",bisque:"#ffe4c4",aquamarine:"#7fffd4",aqua:"#0ff",sienna:"#a0522d",silver:"#c0c0c0",springgreen:"#00ff7f",antiquewhite:"#faebd7",burlywood:"#deb887",brown:"#a52a2a",beige:"#f5f5dc",chocolate:"#d2691e",chartreuse:"#7fff00",cornflowerblue:"#6495ed",cornsilk:"#fff8dc",crimson:"#dc143c",cadetblue:"#5f9ea0",tomato:"#ff6347",fuchsia:"#f0f",blue:"#00f",salmon:"#fa8072",blanchedalmond:"#ffebcd",slateblue:"#6a5acd",slategray:"#708090",thistle:"#d8bfd8",tan:"#d2b48c",cyan:"#0ff",darkblue:"#00008b",darkcyan:"#008b8b",darkgoldenrod:"#b8860b",darkgray:"#a9a9a9",blueviolet:"#8a2be2",black:"#000",darkmagenta:"#8b008b",darkslateblue:"#483d8b",darkkhaki:"#bdb76b",darkorchid:"#9932cc",darkorange:"#ff8c00",darkgreen:"#006400",darkred:"#8b0000",dodgerblue:"#1e90ff",darkslategray:"#2f4f4f",dimgray:"#696969",deepskyblue:"#00bfff",firebrick:"#b22222",forestgreen:"#228b22",indigo:"#4b0082",ivory:"#fffff0",lavenderblush:"#fff0f5",feldspar:"#d19275",indianred:"#cd5c5c",lightgreen:"#90ee90",lightgrey:"#d3d3d3",lightskyblue:"#87cefa",lightslategray:"#789",lightslateblue:"#8470ff",snow:"#fffafa",lightseagreen:"#20b2aa",lightsalmon:"#ffa07a",darksalmon:"#e9967a",darkviolet:"#9400d3",mediumpurple:"#9370d8",mediumaquamarine:"#66cdaa",skyblue:"#87ceeb",lavender:"#e6e6fa",lightsteelblue:"#b0c4de",mediumvioletred:"#c71585",mintcream:"#f5fffa",navajowhite:"#ffdead",navy:"#000080",olivedrab:"#6b8e23",palevioletred:"#d87093",violetred:"#d02090",yellow:"#ff0",yellowgreen:"#9acd32",lawngreen:"#7cfc00",pink:"#ffc0cb",paleturquoise:"#afeeee",palegoldenrod:"#eee8aa",darkolivegreen:"#556b2f",darkseagreen:"#8fbc8f",darkturquoise:"#00ced1",peachpuff:"#ffdab9",deeppink:"#ff1493",violet:"#ee82ee",palegreen:"#98fb98",mediumseagreen:"#3cb371",peru:"#cd853f",saddlebrown:"#8b4513",sandybrown:"#f4a460",rosybrown:"#bc8f8f",purple:"#800080",seagreen:"#2e8b57",seashell:"#fff5ee",papayawhip:"#ffefd5",mediumslateblue:"#7b68ee",plum:"#dda0dd",mediumspringgreen:"#00fa9a"};function l(t){return t<0?0:t>255?255:Math.round(t)||0}function f(t){return t<=0||t>0?t<0?0:t>1?1:Math.round(1e4*t)/1e4:0}var c=/^#([0-9a-f])([0-9a-f])([0-9a-f])([0-9a-f])?$/i,v=/^#([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})?$/i,_=/^rgb\(\s*(-?\d{1,10})\s*,\s*(-?\d{1,10})\s*,\s*(-?\d{1,10})\s*\)$/,d=/^rgba\(\s*(-?\d{1,10})\s*,\s*(-?\d{1,10})\s*,\s*(-?\d{1,10})\s*,\s*(-?[\d]{0,10}(?:\.\d+)?)\s*\)$/;function w(t){var i;if((t=t.toLowerCase())in o&&(t=o[t]),i=d.exec(t)||_.exec(t))return [l(parseInt(i[1],10)),l(parseInt(i[2],10)),l(parseInt(i[3],10)),f(i.length<5?1:parseFloat(i[4]))];if(i=v.exec(t))return [l(parseInt(i[1],16)),l(parseInt(i[2],16)),l(parseInt(i[3],16)),1];if(i=c.exec(t))return [l(17*parseInt(i[1],16)),l(17*parseInt(i[2],16)),l(17*parseInt(i[3],16)),1];throw new Error("Cannot parse color: ".concat(t))}function M(t){var i,n=w(t);return {t:"rgb(".concat(n[0],", ").concat(n[1],", ").concat(n[2],")"),i:(i=n,.199*i[0]+.687*i[1]+.114*i[2]>160?"black":"white")}}var b=function(t,i){return b=Object.setPrototypeOf||{__proto__:[]}instanceof Array&&function(t,i){t.__proto__=i;}||function(t,i){for(var n in i)Object.prototype.hasOwnProperty.call(i,n)&&(t[n]=i[n]);},b(t,i)};function m(t,i){if("function"!=typeof i&&null!==i)throw new TypeError("Class extends value "+String(i)+" is not a constructor or null");function n(){this.constructor=t;}b(t,i),t.prototype=null===i?Object.create(i):(n.prototype=i.prototype,new n);}var p=function(){return p=Object.assign||function(t){for(var i,n=1,s=arguments.length;n<s;n++)for(var h in i=arguments[n])Object.prototype.hasOwnProperty.call(i,h)&&(t[h]=i[h]);return t},p.apply(this,arguments)};function g(t,i,n){if(n||2===arguments.length)for(var s,h=0,r=i.length;h<r;h++)!s&&h in i||(s||(s=Array.prototype.slice.call(i,0,h)),s[h]=i[h]);return t.concat(s||Array.prototype.slice.call(i))}var y=function(){function t(){this.h=[];}return t.prototype.u=function(t,i,n){var s={o:t,l:i,v:!0===n};this.h.push(s);},t.prototype._=function(t){var i=this.h.findIndex((function(i){return t===i.o}));i>-1&&this.h.splice(i,1);},t.prototype.M=function(t){this.h=this.h.filter((function(i){return i.l!==t}));},t.prototype.m=function(t,i){var n=g([],this.h,!0);this.h=this.h.filter((function(t){return !t.v})),n.forEach((function(n){return n.o(t,i)}));},t.prototype.p=function(){return this.h.length>0},t.prototype.g=function(){this.h=[];},t}();function k(t){for(var i=[],n=1;n<arguments.length;n++)i[n-1]=arguments[n];for(var s=0,h=i;s<h.length;s++){var r=h[s];for(var e in r)void 0!==r[e]&&("object"!=typeof r[e]||void 0===t[e]?t[e]=r[e]:k(t[e],r[e]));}return t}function N(t){return "number"==typeof t&&isFinite(t)}function x(t){return "number"==typeof t&&t%1==0}function C(t){return "string"==typeof t}function S(t){return "boolean"==typeof t}function T(t){var i,n,s,h=t;if(!h||"object"!=typeof h)return h;for(n in i=Array.isArray(h)?[]:{},h)h.hasOwnProperty(n)&&(s=h[n],i[n]=s&&"object"==typeof s?T(s):s);return i}function D(t){return null!==t}function A(t){return null===t?void 0:t}var B="'Trebuchet MS', Roboto, Ubuntu, sans-serif";function L(t,i,n){return n=void 0!==n?"".concat(n," "):"",void 0===i&&(i=B),"".concat(n).concat(t,"px ").concat(i)}var E=function(){function t(t){this.k={N:1,C:4,S:NaN,T:"",D:"",A:"",B:0,L:0,F:0,O:0,V:0},this.P=t;}return t.prototype.W=function(){var t=this.k,i=this.R(),n=this.I();return t.S===i&&t.D===n||(t.S=i,t.D=n,t.T=L(i,n),t.O=Math.floor(i/3.5),t.B=t.O,t.L=Math.max(Math.ceil(i/2-t.C/2),0),t.F=Math.ceil(i/2+t.C/2),t.V=Math.round(i/10)),t.A=this.j(),this.k},t.prototype.j=function(){return this.P.W().layout.textColor},t.prototype.R=function(){return this.P.W().layout.fontSize},t.prototype.I=function(){return this.P.W().layout.fontFamily},t}(),F=function(){function t(){this.q=[];}return t.prototype.U=function(t){this.q=t;},t.prototype.H=function(t,i,n,s){this.q.forEach((function(h){t.save(),h.H(t,i,n,s),t.restore();}));},t}(),O=function(){function t(){}return t.prototype.H=function(t,i,n,s){t.save(),t.scale(i,i),this.Y(t,n,s),t.restore();},t.prototype.$=function(t,i,n,s){t.save(),t.scale(i,i),this.K(t,n,s),t.restore();},t.prototype.K=function(t,i,n){},t}(),V=function(t){function i(){var i=null!==t&&t.apply(this,arguments)||this;return i.X=null,i}return m(i,t),i.prototype.Z=function(t){this.X=t;},i.prototype.Y=function(t){if(null!==this.X&&null!==this.X.J){var i=this.X.J,n=this.X,s=function(s){t.beginPath();for(var h=i.to-1;h>=i.from;--h){var r=n.G[h];t.moveTo(r.tt,r.it),t.arc(r.tt,r.it,s,0,2*Math.PI);}t.fill();};t.fillStyle=n.nt,s(n.st+2),t.fillStyle=n.ht,s(n.st);}},i}(O);function P(){return {G:[{tt:0,it:0,rt:0,et:0}],ht:"",nt:"",st:0,J:null}}var W={from:0,to:1},z=function(){function t(t,i){this.ut=new F,this.ot=[],this.lt=[],this.ft=!0,this.P=t,this.ct=i,this.ut.U(this.ot);}return t.prototype.vt=function(t){var i=this.P._t();i.length!==this.ot.length&&(this.lt=i.map(P),this.ot=this.lt.map((function(t){var i=new V;return i.Z(t),i})),this.ut.U(this.ot)),this.ft=!0;},t.prototype.dt=function(t,i,n){return this.ft&&(this.wt(t),this.ft=!1),this.ut},t.prototype.wt=function(t){var i=this,n=this.P._t(),s=this.ct.Mt(),h=this.P.bt();n.forEach((function(n,r){var e,a=i.lt[r],o=n.gt(s);if(null!==o&&n.yt()){var l=u(n.kt());a.ht=o.Nt,a.st=o.st,a.G[0].et=o.et,a.G[0].it=n.Ct().xt(o.et,l.St),a.nt=null!==(e=o.Tt)&&void 0!==e?e:i.P.Dt(a.G[0].it/t),a.G[0].rt=s,a.G[0].tt=h.At(s),a.J=W;}else a.J=null;}));},t}(),R=function(){function t(t){this.Bt=t;}return t.prototype.H=function(t,i,n,r){if(null!==this.Bt){var e=this.Bt.Lt.yt,u=this.Bt.Et.yt;if(e||u){t.save();var a=Math.round(this.Bt.tt*i),o=Math.round(this.Bt.it*i),l=Math.ceil(this.Bt.Ft*i),f=Math.ceil(this.Bt.Ot*i);t.lineCap="butt",e&&a>=0&&(t.lineWidth=Math.floor(this.Bt.Lt.Vt*i),t.strokeStyle=this.Bt.Lt.A,t.fillStyle=this.Bt.Lt.A,s(t,this.Bt.Lt.Pt),function(t,i,n,s){t.beginPath();var h=t.lineWidth%2?.5:0;t.moveTo(i+h,n),t.lineTo(i+h,s),t.stroke();}(t,a,0,f)),u&&o>=0&&(t.lineWidth=Math.floor(this.Bt.Et.Vt*i),t.strokeStyle=this.Bt.Et.A,t.fillStyle=this.Bt.Et.A,s(t,this.Bt.Et.Pt),h(t,o,0,l)),t.restore();}}},t}(),I=function(){function t(t){this.ft=!0,this.Wt={Lt:{Vt:1,Pt:0,A:"",yt:!1},Et:{Vt:1,Pt:0,A:"",yt:!1},Ft:0,Ot:0,tt:0,it:0},this.zt=new R(this.Wt),this.Rt=t;}return t.prototype.vt=function(){this.ft=!0;},t.prototype.dt=function(t,i){return this.ft&&(this.wt(),this.ft=!1),this.zt},t.prototype.wt=function(){var t=this.Rt.yt(),i=u(this.Rt.It()),n=i.jt().W().crosshair,s=this.Wt;s.Et.yt=t&&this.Rt.qt(i),s.Lt.yt=t&&this.Rt.Ut(),s.Et.Vt=n.horzLine.width,s.Et.Pt=n.horzLine.style,s.Et.A=n.horzLine.color,s.Lt.Vt=n.vertLine.width,s.Lt.Pt=n.vertLine.style,s.Lt.A=n.vertLine.color,s.Ft=i.Ht(),s.Ot=i.Yt(),s.tt=this.Rt.$t(),s.it=this.Rt.Kt();},t}();function j(t,i,n,s,h,r){t.fillRect(i+r,n,s-2*r,r),t.fillRect(i+r,n+h-r,s-2*r,r),t.fillRect(i,n,r,h),t.fillRect(i+s-r,n,r,h);}function q(t,i,n){t.save(),t.scale(i,i),n(),t.restore();}function U(t,i,n,s,h,r){t.save(),t.globalCompositeOperation="copy",t.fillStyle=r,t.fillRect(i,n,s,h),t.restore();}function H(t,i,n,s,h,r,e){t.save(),t.globalCompositeOperation="copy";var u=t.createLinearGradient(0,0,0,h);u.addColorStop(0,r),u.addColorStop(1,e),t.fillStyle=u,t.fillRect(i,n,s,h),t.restore();}var Y,$=function(){function t(t,i){this.Z(t,i);}return t.prototype.Z=function(t,i){this.Bt=t,this.Xt=i;},t.prototype.H=function(t,i,n,s,h,r){if(this.Bt.yt){t.font=i.T;var e=this.Bt.Zt||!this.Bt.Jt?i.C:0,u=i.N,a=i.O,o=i.B,l=i.L,f=i.F,c=this.Bt.Gt,v=Math.ceil(n.Qt(t,c)),_=i.V,d=i.S+a+o,w=Math.ceil(.5*d),M=u+v+l+f+e,b=this.Xt.ti;this.Xt.ii&&(b=this.Xt.ii);var m,p,g=(b=Math.round(b))-w,y=g+d,k="right"===h,N=k?s:0,x=Math.ceil(s*r),C=N;if(t.fillStyle=this.Xt.t,t.lineWidth=1,t.lineCap="butt",c){k?(m=N-e,p=(C=N-M)+f):(C=N+M,m=N+e,p=N+u+e+l);var S=Math.max(1,Math.floor(r)),T=Math.max(1,Math.floor(u*r)),D=k?x:0,A=Math.round(g*r),B=Math.round(C*r),L=Math.round(b*r)-Math.floor(.5*r),E=L+S+(L-A),F=Math.round(m*r);t.save(),t.beginPath(),t.moveTo(D,A),t.lineTo(B,A),t.lineTo(B,E),t.lineTo(D,E),t.fill(),t.fillStyle=this.Bt.Tt,t.fillRect(k?x-T:0,A,T,E-A),this.Bt.Zt&&(t.fillStyle=this.Xt.A,t.fillRect(D,L,F-D,S)),t.textAlign="left",t.fillStyle=this.Xt.A,q(t,r,(function(){t.fillText(c,p,y-o-_);})),t.restore();}}},t.prototype.Yt=function(t,i){return this.Bt.yt?t.S+t.O+t.B:0},t}(),K=function(){function t(t){this.ni={ti:0,A:"#FFF",t:"#000"},this.si={Gt:"",yt:!1,Zt:!0,Jt:!1,Tt:""},this.hi={Gt:"",yt:!1,Zt:!1,Jt:!0,Tt:""},this.ft=!0,this.ri=new(t||$)(this.si,this.ni),this.ei=new(t||$)(this.hi,this.ni);}return t.prototype.Gt=function(){return this.ui(),this.si.Gt},t.prototype.ti=function(){return this.ui(),this.ni.ti},t.prototype.vt=function(){this.ft=!0;},t.prototype.Yt=function(t,i){return void 0===i&&(i=!1),Math.max(this.ri.Yt(t,i),this.ei.Yt(t,i))},t.prototype.ai=function(){return this.ni.ii||0},t.prototype.oi=function(t){this.ni.ii=t;},t.prototype.li=function(){return this.ui(),this.si.yt||this.hi.yt},t.prototype.fi=function(){return this.ui(),this.si.yt},t.prototype.dt=function(t){return this.ui(),this.si.Zt=this.si.Zt&&t.W().drawTicks,this.hi.Zt=this.hi.Zt&&t.W().drawTicks,this.ri.Z(this.si,this.ni),this.ei.Z(this.hi,this.ni),this.ri},t.prototype.ci=function(){return this.ui(),this.ri.Z(this.si,this.ni),this.ei.Z(this.hi,this.ni),this.ei},t.prototype.ui=function(){this.ft&&(this.si.Zt=!0,this.hi.Zt=!1,this.vi(this.si,this.hi,this.ni));},t}(),X=function(t){function i(i,n,s){var h=t.call(this)||this;return h.Rt=i,h._i=n,h.di=s,h}return m(i,t),i.prototype.vi=function(t,i,n){t.yt=!1;var s=this.Rt.W().horzLine;if(s.labelVisible){var h=this._i.kt();if(this.Rt.yt()&&!this._i.wi()&&null!==h){var r=M(s.labelBackgroundColor);n.t=r.t,n.A=r.i;var e=this.di(this._i);n.ti=e.ti,t.Gt=this._i.Mi(e.et,h),t.yt=!0;}}},i}(K),Z=/[1-9]/g,J=function(){function t(){this.Bt=null;}return t.prototype.Z=function(t){this.Bt=t;},t.prototype.H=function(t,i,n){var s=this;if(null!==this.Bt&&!1!==this.Bt.yt&&0!==this.Bt.Gt.length){t.font=i.T;var h=Math.round(i.bi.Qt(t,this.Bt.Gt,Z));if(!(h<=0)){t.save();var r=i.mi,e=h+2*r,a=e/2,o=this.Bt.Ht,l=this.Bt.ti,f=Math.floor(l-a)+.5;f<0?(l+=Math.abs(0-f),f=Math.floor(l-a)+.5):f+e>o&&(l-=Math.abs(o-(f+e)),f=Math.floor(l-a)+.5);var c=f+e,v=0+i.N+i.O+i.S+i.B;t.fillStyle=this.Bt.t;var _=Math.round(f*n),d=Math.round(0*n),w=Math.round(c*n),M=Math.round(v*n);t.fillRect(_,d,w-_,M-d);var b=Math.round(this.Bt.ti*n),m=d,p=Math.round((m+i.N+i.C)*n);t.fillStyle=this.Bt.A;var g=Math.max(1,Math.floor(n)),y=Math.floor(.5*n);t.fillRect(b-y,m,g,p-m);var k=v-i.V-i.B;t.textAlign="left",t.fillStyle=this.Bt.A,q(t,n,(function(){t.fillText(u(s.Bt).Gt,f+r,k);})),t.restore();}}},t}(),G=function(){function t(t,i,n){this.ft=!0,this.zt=new J,this.Wt={yt:!1,t:"#4c525e",A:"white",Gt:"",Ht:0,ti:NaN},this.ct=t,this.pi=i,this.di=n;}return t.prototype.vt=function(){this.ft=!0;},t.prototype.dt=function(){return this.ft&&(this.wt(),this.ft=!1),this.zt.Z(this.Wt),this.zt},t.prototype.wt=function(){var t=this.Wt;t.yt=!1;var i=this.ct.W().vertLine;if(i.labelVisible){var n=this.pi.bt();if(!n.wi()){var s=n.gi(this.ct.Mt());t.Ht=n.Ht();var h=this.di();if(h.rt){t.ti=h.ti,t.Gt=n.yi(u(s)),t.yt=!0;var r=M(i.labelBackgroundColor);t.t=r.t,t.A=r.i;}}}},t}(),Q=function(){function t(){this.ki=null,this.Ni=0;}return t.prototype.xi=function(){return this.Ni},t.prototype.Ci=function(t){this.Ni=t;},t.prototype.Ct=function(){return this.ki},t.prototype.Si=function(t){this.ki=t;},t.prototype.Ti=function(){return []},t.prototype.yt=function(){return !0},t}();!function(t){t[t.Normal=0]="Normal",t[t.Magnet=1]="Magnet";}(Y||(Y={}));var tt=function(t){function i(i,n){var s=t.call(this)||this;s.Di=null,s.Ai=NaN,s.Bi=0,s.Li=!0,s.Ei=new Map,s.Fi=!1,s.Oi=NaN,s.Vi=NaN,s.Pi=NaN,s.Wi=NaN,s.pi=i,s.zi=n,s.Ri=new z(i,s);var h,r;s.Ii=(h=function(){return s.Ai},r=function(){return s.Vi},function(t){var i=r(),n=h();if(t===u(s.Di).ji())return {et:n,ti:i};var e=u(t.kt());return {et:t.qi(i,e),ti:i}});var e=function(t,i){return function(){return {rt:s.pi.bt().gi(t()),ti:i()}}}((function(){return s.Bi}),(function(){return s.$t()}));return s.Ui=new G(s,i,e),s.Hi=new I(s),s}return m(i,t),i.prototype.W=function(){return this.zi},i.prototype.Yi=function(t,i){this.Pi=t,this.Wi=i;},i.prototype.$i=function(){this.Pi=NaN,this.Wi=NaN;},i.prototype.Ki=function(){return this.Pi},i.prototype.Xi=function(){return this.Wi},i.prototype.Zi=function(t,i,n){this.Fi||(this.Fi=!0),this.Li=!0,this.Ji(t,i,n);},i.prototype.Mt=function(){return this.Bi},i.prototype.$t=function(){return this.Oi},i.prototype.Kt=function(){return this.Vi},i.prototype.yt=function(){return this.Li},i.prototype.Gi=function(){this.Li=!1,this.Qi(),this.Ai=NaN,this.Oi=NaN,this.Vi=NaN,this.Di=null,this.$i();},i.prototype.tn=function(t){return null!==this.Di?[this.Hi,this.Ri]:[]},i.prototype.qt=function(t){return t===this.Di&&this.zi.horzLine.visible},i.prototype.Ut=function(){return this.zi.vertLine.visible},i.prototype.nn=function(t,i){this.Li&&this.Di===t||this.Ei.clear();var n=[];return this.Di===t&&n.push(this.sn(this.Ei,i,this.Ii)),n},i.prototype.Ti=function(){return this.Li?[this.Ui]:[]},i.prototype.It=function(){return this.Di},i.prototype.hn=function(){this.Hi.vt(),this.Ei.forEach((function(t){return t.vt()})),this.Ui.vt(),this.Ri.vt();},i.prototype.rn=function(t){return t&&!t.ji().wi()?t.ji():null},i.prototype.Ji=function(t,i,n){this.en(t,i,n)&&this.hn();},i.prototype.en=function(t,i,n){var s=this.Oi,h=this.Vi,r=this.Ai,e=this.Bi,u=this.Di,a=this.rn(n);this.Bi=t,this.Oi=isNaN(t)?NaN:this.pi.bt().At(t),this.Di=n;var o=null!==a?a.kt():null;return null!==a&&null!==o?(this.Ai=i,this.Vi=a.xt(i,o)):(this.Ai=NaN,this.Vi=NaN),s!==this.Oi||h!==this.Vi||e!==this.Bi||r!==this.Ai||u!==this.Di},i.prototype.Qi=function(){var t=this.pi._t().map((function(t){return t.an().un()})).filter(D),i=0===t.length?null:Math.max.apply(Math,t);this.Bi=null!==i?i:NaN;},i.prototype.sn=function(t,i,n){var s=t.get(i);return void 0===s&&(s=new X(this,i,n),t.set(i,s)),s},i}(Q);function it(t){return "left"===t||"right"===t}var nt=function(){function t(t){this.on=new Map,this.ln=[],this.fn=t;}return t.prototype.cn=function(t,i){var n=function(t,i){return void 0===t?i:{vn:Math.max(t.vn,i.vn),_n:t._n||i._n}}(this.on.get(t),i);this.on.set(t,n);},t.prototype.dn=function(){return this.fn},t.prototype.wn=function(t){var i=this.on.get(t);return void 0===i?{vn:this.fn}:{vn:Math.max(this.fn,i.vn),_n:i._n}},t.prototype.Mn=function(){this.ln=[{bn:0}];},t.prototype.mn=function(t){this.ln=[{bn:1,St:t}];},t.prototype.pn=function(){this.ln=[{bn:4}];},t.prototype.gn=function(t){this.ln.push({bn:2,St:t});},t.prototype.yn=function(t){this.ln.push({bn:3,St:t});},t.prototype.kn=function(){return this.ln},t.prototype.Nn=function(t){for(var i=this,n=0,s=t.ln;n<s.length;n++){var h=s[n];this.xn(h);}this.fn=Math.max(this.fn,t.fn),t.on.forEach((function(t,n){i.cn(n,t);}));},t.prototype.xn=function(t){switch(t.bn){case 0:this.Mn();break;case 1:this.mn(t.St);break;case 2:this.gn(t.St);break;case 3:this.yn(t.St);break;case 4:this.pn();}},t}(),st=".";function ht(t,i){if(!N(t))return "n/a";if(!x(i))throw new TypeError("invalid length");if(i<0||i>16)throw new TypeError("invalid length");if(0===i)return t.toString();return ("0000000000000000"+t.toString()).slice(-i)}var rt=function(){function t(t,i){if(i||(i=1),N(t)&&x(t)||(t=100),t<0)throw new TypeError("invalid base");this._i=t,this.Cn=i,this.Sn();}return t.prototype.format=function(t){var i=t<0?"−":"";return t=Math.abs(t),i+this.Tn(t)},t.prototype.Sn=function(){if(this.Dn=0,this._i>0&&this.Cn>0)for(var t=this._i;t>1;)t/=10,this.Dn++;},t.prototype.Tn=function(t){var i=this._i/this.Cn,n=Math.floor(t),s="",h=void 0!==this.Dn?this.Dn:NaN;if(i>1){var r=+(Math.round(t*i)-n*i).toFixed(this.Dn);r>=i&&(r-=i,n+=1),s=st+ht(+r.toFixed(this.Dn)*this.Cn,h);}else n=Math.round(n*i)/i,h>0&&(s=st+ht(0,h));return n.toFixed(0)+s},t}(),et=function(t){function i(i){return void 0===i&&(i=100),t.call(this,i)||this}return m(i,t),i.prototype.format=function(i){return "".concat(t.prototype.format.call(this,i),"%")},i}(rt),ut=function(){function t(t){this.An=t;}return t.prototype.format=function(t){var i="";return t<0&&(i="-",t=-t),t<995?i+this.Bn(t):t<999995?i+this.Bn(t/1e3)+"K":t<999999995?(t=1e3*Math.round(t/1e3),i+this.Bn(t/1e6)+"M"):(t=1e6*Math.round(t/1e6),i+this.Bn(t/1e9)+"B")},t.prototype.Bn=function(t){var i=Math.pow(10,this.An);return ((t=Math.round(t*i)/i)>=1e-15&&t<1?t.toFixed(this.An).replace(/\.?0+$/,""):String(t)).replace(/(\.[1-9]*)0+$/,(function(t,i){return i}))},t}();function at(t,i,n,s){if(0!==i.length){var h=i[s.from].tt,r=i[s.from].it;t.moveTo(h,r);for(var e=s.from+1;e<s.to;++e){var u=i[e];if(1===n){var a=i[e-1].it,o=u.tt;t.lineTo(o,a);}t.lineTo(u.tt,u.it);}}}var ot=function(t){function i(){var i=null!==t&&t.apply(this,arguments)||this;return i.X=null,i}return m(i,t),i.prototype.Z=function(t){this.X=t;},i.prototype.Y=function(t){if(null!==this.X&&0!==this.X.G.length&&null!==this.X.J){if(t.lineCap="butt",t.lineJoin="round",t.lineWidth=this.X.Vt,s(t,this.X.Pt),t.lineWidth=1,t.beginPath(),1===this.X.G.length){var i=this.X.G[0],n=this.X.Ln/2;t.moveTo(i.tt-n,this.X.En),t.lineTo(i.tt-n,i.it),t.lineTo(i.tt+n,i.it),t.lineTo(i.tt+n,this.X.En);}else t.moveTo(this.X.G[this.X.J.from].tt,this.X.En),t.lineTo(this.X.G[this.X.J.from].tt,this.X.G[this.X.J.from].it),at(t,this.X.G,this.X.Fn,this.X.J),this.X.J.to>this.X.J.from&&(t.lineTo(this.X.G[this.X.J.to-1].tt,this.X.En),t.lineTo(this.X.G[this.X.J.from].tt,this.X.En));t.closePath(),t.fillStyle=this.On(t),t.fill();}},i}(O),lt=function(t){function i(){return null!==t&&t.apply(this,arguments)||this}return m(i,t),i.prototype.On=function(t){var i=this.X,n=t.createLinearGradient(0,0,0,i.Vn);return n.addColorStop(0,i.Pn),n.addColorStop(1,i.Wn),n},i}(ot),ft=function(t){function i(){var i=null!==t&&t.apply(this,arguments)||this;return i.X=null,i}return m(i,t),i.prototype.Z=function(t){this.X=t;},i.prototype.Y=function(t){if(null!==this.X&&0!==this.X.G.length&&null!==this.X.J)if(t.lineCap="butt",t.lineWidth=this.X.Vt,s(t,this.X.Pt),t.strokeStyle=this.zn(t),t.lineJoin="round",1===this.X.G.length){t.beginPath();var i=this.X.G[0];t.moveTo(i.tt-this.X.Ln/2,i.it),t.lineTo(i.tt+this.X.Ln/2,i.it),void 0!==i.A&&(t.strokeStyle=i.A),t.stroke();}else this.Rn(t,this.X);},i.prototype.Rn=function(t,i){t.beginPath(),at(t,i.G,i.Fn,i.J),t.stroke();},i}(O),ct=function(t){function i(){return null!==t&&t.apply(this,arguments)||this}return m(i,t),i.prototype.Rn=function(t,i){var n,s,h=i.G,r=i.J,e=i.Fn,u=i.ht;if(0!==h.length&&null!==r){t.beginPath();var a=h[r.from];t.moveTo(a.tt,a.it);var o=null!==(n=a.A)&&void 0!==n?n:u;t.strokeStyle=o;for(var l=function(i){t.stroke(),t.beginPath(),t.strokeStyle=i,o=i;},f=r.from+1;f<r.to;++f){var c=h[f],v=h[f-1],_=null!==(s=c.A)&&void 0!==s?s:u;1===e&&(t.lineTo(c.tt,v.it),_!==o&&(l(_),t.moveTo(c.tt,v.it))),t.lineTo(c.tt,c.it),1!==e&&_!==o&&(l(_),t.moveTo(c.tt,c.it));}t.stroke();}},i.prototype.zn=function(){return this.X.ht},i}(ft);function vt(t,i,n,s,h){void 0===s&&(s=0),void 0===h&&(h=t.length);for(var r=h-s;0<r;){var e=r>>1,u=s+e;n(t[u],i)?(s=u+1,r-=e+1):r=e;}return s}function _t(t,i,n,s,h){void 0===s&&(s=0),void 0===h&&(h=t.length);for(var r=h-s;0<r;){var e=r>>1,u=s+e;n(i,t[u])?r=e:(s=u+1,r-=e+1);}return s}function dt(t,i){return t.rt<i}function wt(t,i){return t<i.rt}function Mt(t,i,n){var s=i.In(),h=i.jn(),r=vt(t,s,dt),e=_t(t,h,wt);if(!n)return {from:r,to:e};var u=r,a=e;return r>0&&r<t.length&&t[r].rt>=s&&(u=r-1),e>0&&e<t.length&&t[e-1].rt<=h&&(a=e+1),{from:u,to:a}}var bt=function(){function t(t,i,n){this.qn=!0,this.Un=!0,this.Hn=!0,this.Yn=[],this.$n=null,this.Kn=t,this.Xn=i,this.Zn=n;}return t.prototype.vt=function(t){this.qn=!0,"data"===t&&(this.Un=!0),"options"===t&&(this.Hn=!0);},t.prototype.Jn=function(){this.Un&&(this.Gn(),this.Un=!1),this.qn&&(this.Qn(),this.qn=!1),this.Hn&&(this.ts(),this.Hn=!1);},t.prototype.ns=function(){this.$n=null;},t.prototype.Qn=function(){var t=this.Kn.Ct(),i=this.Xn.bt();if(this.ns(),!i.wi()&&!t.wi()){var n=i.ss();if(null!==n&&0!==this.Kn.an().hs()){var s=this.Kn.kt();null!==s&&(this.$n=Mt(this.Yn,n,this.Zn),this.rs(t,i,s.St));}}},t}(),mt=function(t){function i(i,n){return t.call(this,i,n,!0)||this}return m(i,t),i.prototype.rs=function(t,i,n){i.es(this.Yn,A(this.$n)),t.us(this.Yn,n,A(this.$n));},i.prototype.os=function(t,i){return {rt:t,et:i,tt:NaN,it:NaN}},i.prototype.ts=function(){},i.prototype.Gn=function(){var t=this,i=this.Kn.ls();this.Yn=this.Kn.an().fs().map((function(n){var s=n.St[3];return t.cs(n.vs,s,i)}));},i}(bt),pt=function(t){function i(i,n){var s=t.call(this,i,n)||this;return s.zt=new F,s._s=new lt,s.ds=new ct,s.zt.U([s._s,s.ds]),s}return m(i,t),i.prototype.dt=function(t,i){if(!this.Kn.yt())return null;var n=this.Kn.W();return this.Jn(),this._s.Z({Fn:n.lineType,G:this.Yn,Pt:n.lineStyle,Vt:n.lineWidth,Pn:n.topColor,Wn:n.bottomColor,En:t,Vn:t,J:this.$n,Ln:this.Xn.bt().ws()}),this.ds.Z({Fn:n.lineType,G:this.Yn,ht:n.lineColor,Pt:n.lineStyle,Vt:n.lineWidth,J:this.$n,Ln:this.Xn.bt().ws()}),this.zt},i.prototype.cs=function(t,i){return this.os(t,i)},i}(mt);var gt=function(){function t(){this.Bt=null,this.Ms=0,this.bs=0;}return t.prototype.Z=function(t){this.Bt=t;},t.prototype.H=function(t,i,n,s){if(null!==this.Bt&&0!==this.Bt.an.length&&null!==this.Bt.J){if(this.Ms=this.ps(i),this.Ms>=2)Math.max(1,Math.floor(i))%2!=this.Ms%2&&this.Ms--;this.bs=this.Bt.gs?Math.min(this.Ms,Math.floor(i)):this.Ms;for(var h=null,r=this.bs<=this.Ms&&this.Bt.ws>=Math.floor(1.5*i),e=this.Bt.J.from;e<this.Bt.J.to;++e){var u=this.Bt.an[e];h!==u.A&&(t.fillStyle=u.A,h=u.A);var a=Math.floor(.5*this.bs),o=Math.round(u.tt*i),l=o-a,f=this.bs,c=l+f-1,v=Math.min(u.ys,u.ks),_=Math.max(u.ys,u.ks),d=Math.round(v*i)-a,w=Math.round(_*i)+a,M=Math.max(w-d,this.bs);t.fillRect(l,d,f,M);var b=Math.ceil(1.5*this.Ms);if(r){if(this.Bt.Ns){var m=o-b,p=Math.max(d,Math.round(u.xs*i)-a),g=p+f-1;g>d+M-1&&(p=(g=d+M-1)-f+1),t.fillRect(m,p,l-m,g-p+1);}var y=o+b,k=Math.max(d,Math.round(u.Cs*i)-a),N=k+f-1;N>d+M-1&&(k=(N=d+M-1)-f+1),t.fillRect(c+1,k,y-c,N-k+1);}}}},t.prototype.ps=function(t){var i=Math.floor(t);return Math.max(i,Math.floor(function(t,i){return Math.floor(.3*t*i)}(u(this.Bt).ws,t)))},t}(),yt=function(t){function i(i,n){return t.call(this,i,n,!1)||this}return m(i,t),i.prototype.rs=function(t,i,n){i.es(this.Yn,A(this.$n)),t.Ss(this.Yn,n,A(this.$n));},i.prototype.Ts=function(t,i,n){return {rt:t,open:i.St[0],high:i.St[1],low:i.St[2],close:i.St[3],tt:NaN,xs:NaN,ys:NaN,ks:NaN,Cs:NaN}},i.prototype.Gn=function(){var t=this,i=this.Kn.ls();this.Yn=this.Kn.an().fs().map((function(n){return t.cs(n.vs,n,i)}));},i}(bt),kt=function(t){function i(){var i=null!==t&&t.apply(this,arguments)||this;return i.zt=new gt,i}return m(i,t),i.prototype.dt=function(t,i){if(!this.Kn.yt())return null;var n=this.Kn.W();this.Jn();var s={an:this.Yn,ws:this.Xn.bt().ws(),Ns:n.openVisible,gs:n.thinBars,J:this.$n};return this.zt.Z(s),this.zt},i.prototype.ts=function(){var t=this;this.Yn.forEach((function(i){i.A=t.Kn.ls().As(i.rt).Ds;}));},i.prototype.cs=function(t,i,n){return p(p({},this.Ts(t,i,n)),{A:n.As(t).Ds})},i}(yt);function Nt(t,i,n){return Math.min(Math.max(t,i),n)}function xt(t,i,n){return i-t<=n}function Ct(t){return t<=0?NaN:Math.log(t)/Math.log(10)}function St(t){var i=Math.ceil(t);return i%2!=0?i-1:i}function Tt(t){var i=Math.ceil(t);return i%2==0?i-1:i}var Dt=function(t){function i(){return null!==t&&t.apply(this,arguments)||this}return m(i,t),i.prototype.On=function(t){var i=this.X,n=t.createLinearGradient(0,0,0,i.Vn),s=Nt(i.En/i.Vn,0,1);return n.addColorStop(0,i.Bs),n.addColorStop(s,i.Ls),n.addColorStop(s,i.Es),n.addColorStop(1,i.Fs),n},i}(ot),At=function(t){function i(){return null!==t&&t.apply(this,arguments)||this}return m(i,t),i.prototype.zn=function(t){var i=this.X,n=t.createLinearGradient(0,0,0,i.Vn),s=Nt(i.En/i.Vn,0,1);return n.addColorStop(0,i.Pn),n.addColorStop(s,i.Pn),n.addColorStop(s,i.Wn),n.addColorStop(1,i.Wn),n},i}(ft),Bt=function(t){function i(i,n){var s=t.call(this,i,n)||this;return s.Os=new Dt,s.Vs=new At,s.ut=new F,s.ut.U([s.Os,s.Vs]),s}return m(i,t),i.prototype.dt=function(t,i){if(!this.Kn.yt())return null;var n=this.Kn.kt();if(null===n)return null;var s=this.Kn.W();this.Jn();var h=this.Kn.Ct().xt(s.baseValue.price,n.St),r=this.Xn.bt().ws();return this.Os.Z({G:this.Yn,Bs:s.topFillColor1,Ls:s.topFillColor2,Es:s.bottomFillColor1,Fs:s.bottomFillColor2,Vt:s.lineWidth,Pt:s.lineStyle,Fn:0,En:h,Vn:t,J:this.$n,Ln:r}),this.Vs.Z({G:this.Yn,Pn:s.topLineColor,Wn:s.bottomLineColor,Vt:s.lineWidth,Pt:s.lineStyle,Fn:0,En:h,Vn:t,J:this.$n,Ln:r}),this.ut},i.prototype.cs=function(t,i){return this.os(t,i)},i}(mt),Lt=function(){function t(){this.Bt=null,this.Ms=0;}return t.prototype.Z=function(t){this.Bt=t;},t.prototype.H=function(t,i,n,s){if(null!==this.Bt&&0!==this.Bt.an.length&&null!==this.Bt.J){if(this.Ms=function(t,i){if(t>=2.5&&t<=4)return Math.floor(3*i);var n=1-.2*Math.atan(Math.max(4,t)-4)/(.5*Math.PI),s=Math.floor(t*n*i),h=Math.floor(t*i),r=Math.min(s,h);return Math.max(Math.floor(i),r)}(this.Bt.ws,i),this.Ms>=2)Math.floor(i)%2!=this.Ms%2&&this.Ms--;var h=this.Bt.an;this.Bt.Ps&&this.Ws(t,h,this.Bt.J,i),this.Bt.zs&&this.Rs(t,h,this.Bt.J,this.Bt.ws,i);var r=this.Is(i);(!this.Bt.zs||this.Ms>2*r)&&this.js(t,h,this.Bt.J,i);}},t.prototype.Ws=function(t,i,n,s){if(null!==this.Bt){var h="",r=Math.min(Math.floor(s),Math.floor(this.Bt.ws*s));r=Math.max(Math.floor(s),Math.min(r,this.Ms));for(var e=Math.floor(.5*r),u=null,a=n.from;a<n.to;a++){var o=i[a];o.qs!==h&&(t.fillStyle=o.qs,h=o.qs);var l=Math.round(Math.min(o.xs,o.Cs)*s),f=Math.round(Math.max(o.xs,o.Cs)*s),c=Math.round(o.ys*s),v=Math.round(o.ks*s),_=Math.round(s*o.tt)-e,d=_+r-1;null!==u&&(_=Math.max(u+1,_),_=Math.min(_,d));var w=d-_+1;t.fillRect(_,c,w,l-c),t.fillRect(_,f+1,w,v-f),u=d;}}},t.prototype.Is=function(t){var i=Math.floor(1*t);this.Ms<=2*i&&(i=Math.floor(.5*(this.Ms-1)));var n=Math.max(Math.floor(t),i);return this.Ms<=2*n?Math.max(Math.floor(t),Math.floor(1*t)):n},t.prototype.Rs=function(t,i,n,s,h){if(null!==this.Bt)for(var r="",e=this.Is(h),u=null,a=n.from;a<n.to;a++){var o=i[a];o.Tt!==r&&(t.fillStyle=o.Tt,r=o.Tt);var l=Math.round(o.tt*h)-Math.floor(.5*this.Ms),f=l+this.Ms-1,c=Math.round(Math.min(o.xs,o.Cs)*h),v=Math.round(Math.max(o.xs,o.Cs)*h);if(null!==u&&(l=Math.max(u+1,l),l=Math.min(l,f)),this.Bt.ws*h>2*e)j(t,l,c,f-l+1,v-c+1,e);else {var _=f-l+1;t.fillRect(l,c,_,v-c+1);}u=f;}},t.prototype.js=function(t,i,n,s){if(null!==this.Bt)for(var h="",r=this.Is(s),e=n.from;e<n.to;e++){var u=i[e],a=Math.round(Math.min(u.xs,u.Cs)*s),o=Math.round(Math.max(u.xs,u.Cs)*s),l=Math.round(u.tt*s)-Math.floor(.5*this.Ms),f=l+this.Ms-1;if(u.A!==h){var c=u.A;t.fillStyle=c,h=c;}this.Bt.zs&&(l+=r,a+=r,f-=r,o-=r),a>o||t.fillRect(l,a,f-l+1,o-a+1);}},t}(),Et=function(t){function i(){var i=null!==t&&t.apply(this,arguments)||this;return i.zt=new Lt,i}return m(i,t),i.prototype.dt=function(t,i){if(!this.Kn.yt())return null;var n=this.Kn.W();this.Jn();var s={an:this.Yn,ws:this.Xn.bt().ws(),Ps:n.wickVisible,zs:n.borderVisible,J:this.$n};return this.zt.Z(s),this.zt},i.prototype.ts=function(){var t=this;this.Yn.forEach((function(i){var n=t.Kn.ls().As(i.rt);i.A=n.Ds,i.qs=n.Us,i.Tt=n.Hs;}));},i.prototype.cs=function(t,i,n){var s=n.As(t);return p(p({},this.Ts(t,i,n)),{A:s.Ds,qs:s.Us,Tt:s.Hs})},i}(yt),Ft=function(){function t(){this.Bt=null,this.Ys=[];}return t.prototype.Z=function(t){this.Bt=t,this.Ys=[];},t.prototype.H=function(t,i,n,s){if(null!==this.Bt&&0!==this.Bt.G.length&&null!==this.Bt.J){this.Ys.length||this.$s(i);for(var h=Math.max(1,Math.floor(i)),r=Math.round(this.Bt.Ks*i)-Math.floor(h/2),e=r+h,u=this.Bt.J.from;u<this.Bt.J.to;u++){var a=this.Bt.G[u],o=this.Ys[u-this.Bt.J.from],l=Math.round(a.it*i);t.fillStyle=a.A;var f=void 0,c=void 0;l<=r?(f=l,c=e):(f=r,c=l-Math.floor(h/2)+h),t.fillRect(o.In,f,o.jn-o.In+1,c-f);}}},t.prototype.$s=function(t){if(null!==this.Bt&&0!==this.Bt.G.length&&null!==this.Bt.J){var i=Math.ceil(this.Bt.ws*t)<=1?0:Math.max(1,Math.floor(t)),n=Math.round(this.Bt.ws*t)-i;this.Ys=new Array(this.Bt.J.to-this.Bt.J.from);for(var s=this.Bt.J.from;s<this.Bt.J.to;s++){var h,r=this.Bt.G[s],e=Math.round(r.tt*t),u=void 0,a=void 0;if(n%2)u=e-(h=(n-1)/2),a=e+h;else u=e-(h=n/2),a=e+h-1;this.Ys[s-this.Bt.J.from]={In:u,jn:a,Xs:e,Zs:r.tt*t,rt:r.rt};}for(s=this.Bt.J.from+1;s<this.Bt.J.to;s++){var o=this.Ys[s-this.Bt.J.from],l=this.Ys[s-this.Bt.J.from-1];o.rt===l.rt+1&&(o.In-l.jn!==i+1&&(l.Xs>l.Zs?l.jn=o.In-i-1:o.In=l.jn+i+1));}var f=Math.ceil(this.Bt.ws*t);for(s=this.Bt.J.from;s<this.Bt.J.to;s++){(o=this.Ys[s-this.Bt.J.from]).jn<o.In&&(o.jn=o.In);var c=o.jn-o.In+1;f=Math.min(c,f);}if(i>0&&f<4)for(s=this.Bt.J.from;s<this.Bt.J.to;s++){(c=(o=this.Ys[s-this.Bt.J.from]).jn-o.In+1)>f&&(o.Xs>o.Zs?o.jn-=1:o.In+=1);}}else this.Ys=[];},t}();function Ot(t){return {G:[],ws:t,Ks:NaN,J:null}}function Vt(t,i,n){return {rt:t,et:i,tt:NaN,it:NaN,A:n}}var Pt=function(t){function i(i,n){var s=t.call(this,i,n,!1)||this;return s.ut=new F,s.Js=Ot(0),s.zt=new Ft,s}return m(i,t),i.prototype.dt=function(t,i){return this.Kn.yt()?(this.Jn(),this.ut):null},i.prototype.Gn=function(){var t=this.Xn.bt().ws();this.Js=Ot(t);for(var i=0,n=0,s=this.Kn.W().color,h=0,r=this.Kn.an().fs();h<r.length;h++){var e=r[h],u=e.St[3],a=void 0!==e.A?e.A:s,o=Vt(e.vs,u,a);++i<this.Js.G.length?this.Js.G[i]=o:this.Js.G.push(o),this.Yn[n++]={rt:e.vs,tt:0};}this.zt.Z(this.Js),this.ut.U([this.zt]);},i.prototype.ts=function(){},i.prototype.ns=function(){t.prototype.ns.call(this),this.Js.J=null;},i.prototype.rs=function(t,i,n){if(null!==this.$n){var s=i.ws(),h=u(i.ss()),r=t.xt(this.Kn.W().base,n);i.es(this.Js.G),t.us(this.Js.G,n),this.Js.Ks=r,this.Js.J=Mt(this.Js.G,h,!1),this.Js.ws=s,this.zt.Z(this.Js);}},i}(bt),Wt=function(t){function i(i,n){var s=t.call(this,i,n)||this;return s.ds=new ct,s}return m(i,t),i.prototype.dt=function(t,i){if(!this.Kn.yt())return null;var n=this.Kn.W();this.Jn();var s={G:this.Yn,ht:n.color,Pt:n.lineStyle,Fn:n.lineType,Vt:n.lineWidth,J:this.$n,Ln:this.Xn.bt().ws()};return this.ds.Z(s),this.ds},i.prototype.ts=function(){var t=this;this.Yn.forEach((function(i){i.A=t.Kn.ls().As(i.rt).Ds;}));},i.prototype.cs=function(t,i,n){var s=this.os(t,i);return s.A=n.As(t).Ds,s},i}(mt),zt=/[2-9]/g,Rt=function(){function t(t){void 0===t&&(t=50),this.Gs=new Map,this.Qs=0,this.th=Array.from(new Array(t));}return t.prototype.ih=function(){this.Gs.clear(),this.th.fill(void 0);},t.prototype.Qt=function(t,i,n){var s=n||zt,h=String(i).replace(s,"0"),r=this.Gs.get(h);if(void 0===r){if(0===(r=t.measureText(h).width)&&0!==i.length)return 0;var e=this.th[this.Qs];void 0!==e&&this.Gs.delete(e),this.th[this.Qs]=h,this.Qs=(this.Qs+1)%this.th.length,this.Gs.set(h,r);}return r},t}(),It=function(){function t(t){this.nh=null,this.k=null,this.sh="right",this.hh=0,this.rh=t;}return t.prototype.eh=function(t,i,n,s){this.nh=t,this.k=i,this.hh=n,this.sh=s;},t.prototype.H=function(t,i){null!==this.k&&null!==this.nh&&this.nh.H(t,this.k,this.rh,this.hh,this.sh,i);},t}(),jt=function(){function t(t,i,n){this.uh=t,this.rh=new Rt(50),this.ah=i,this.P=n,this.R=-1,this.zt=new It(this.rh);}return t.prototype.dt=function(t,i){var n=this.P.oh(this.ah);if(null===n)return null;var s=n.lh(this.ah)?n.fh():this.ah.Ct();if(null===s)return null;var h=n._h(s);if("overlay"===h)return null;var r=this.P.dh();return r.S!==this.R&&(this.R=r.S,this.rh.ih()),this.zt.eh(this.uh.ci(),r,i,h),this.zt},t}(),qt=function(){function t(){this.Bt=null;}return t.prototype.Z=function(t){this.Bt=t;},t.prototype.H=function(t,i,n,r){if(null!==this.Bt&&!1!==this.Bt.yt){var e=Math.round(this.Bt.it*i);if(!(e<0||e>Math.ceil(this.Bt.Yt*i))){var u=Math.ceil(this.Bt.Ht*i);t.lineCap="butt",t.strokeStyle=this.Bt.A,t.lineWidth=Math.floor(this.Bt.Vt*i),s(t,this.Bt.Pt),h(t,e,0,u);}}},t}(),Ut=function(){function t(t){this.wh={Ht:0,Yt:0,it:0,A:"rgba(0, 0, 0, 0)",Vt:1,Pt:0,yt:!1},this.Mh=new qt,this.ft=!0,this.Kn=t,this.Xn=t.jt(),this.Mh.Z(this.wh);}return t.prototype.vt=function(){this.ft=!0;},t.prototype.dt=function(t,i){return this.Kn.yt()?(this.ft&&(this.bh(t,i),this.ft=!1),this.Mh):null},t}(),Ht=function(t){function i(i){return t.call(this,i)||this}return m(i,t),i.prototype.bh=function(t,i){this.wh.yt=!1;var n=this.Kn.Ct(),s=n.mh().mh;if(2===s||3===s){var h=this.Kn.W();if(h.baseLineVisible&&this.Kn.yt()){var r=this.Kn.kt();null!==r&&(this.wh.yt=!0,this.wh.it=n.xt(r.St,r.St),this.wh.Ht=i,this.wh.Yt=t,this.wh.A=h.baseLineColor,this.wh.Vt=h.baseLineWidth,this.wh.Pt=h.baseLineStyle);}}},i}(Ut),Yt=function(){function t(){this.Bt=null;}return t.prototype.Z=function(t){this.Bt=t;},t.prototype.ph=function(){return this.Bt},t.prototype.H=function(t,i,n,s){var h=this.Bt;if(null!==h){t.save();var r=Math.max(1,Math.floor(i)),e=r%2/2,u=Math.round(h.Zs.x*i)+e,a=h.Zs.y*i;t.fillStyle=h.gh,t.beginPath();var o=Math.max(2,1.5*h.yh)*i;t.arc(u,a,o,0,2*Math.PI,!1),t.fill(),t.fillStyle=h.kh,t.beginPath(),t.arc(u,a,h.st*i,0,2*Math.PI,!1),t.fill(),t.lineWidth=r,t.strokeStyle=h.Nh,t.beginPath(),t.arc(u,a,h.st*i+r/2,0,2*Math.PI,!1),t.stroke(),t.restore();}},t}(),$t=[{xh:0,Ch:.25,Sh:4,Th:10,Dh:.25,Ah:0,Bh:.4,Lh:.8},{xh:.25,Ch:.525,Sh:10,Th:14,Dh:0,Ah:0,Bh:.8,Lh:0},{xh:.525,Ch:1,Sh:14,Th:14,Dh:0,Ah:0,Bh:0,Lh:0}];function Kt(t,i,n,s){return function(t,i){if("transparent"===t)return t;var n=w(t),s=n[3];return "rgba(".concat(n[0],", ").concat(n[1],", ").concat(n[2],", ").concat(i*s,")")}(t,n+(s-n)*i)}function Xt(t,i){for(var n,s=t%2600/2600,h=0,e=$t;h<e.length;h++){var u=e[h];if(s>=u.xh&&s<=u.Ch){n=u;break}}r(void 0!==n,"Last price animation internal logic error");var a,o,l,f=(s-n.xh)/(n.Ch-n.xh);return {kh:Kt(i,f,n.Dh,n.Ah),Nh:Kt(i,f,n.Bh,n.Lh),st:(a=f,o=n.Sh,l=n.Th,o+(l-o)*a)}}var Zt=function(){function t(t){this.zt=new Yt,this.ft=!0,this.Eh=!0,this.Fh=performance.now(),this.Oh=this.Fh-1,this.Vh=t;}return t.prototype.Ph=function(){this.Oh=this.Fh-1,this.vt();},t.prototype.Wh=function(){if(this.vt(),2===this.Vh.W().lastPriceAnimation){var t=performance.now(),i=this.Oh-t;if(i>0)return void(i<650&&(this.Oh+=2600));this.Fh=t,this.Oh=t+2600;}},t.prototype.vt=function(){this.ft=!0;},t.prototype.zh=function(){this.Eh=!0;},t.prototype.yt=function(){return 0!==this.Vh.W().lastPriceAnimation},t.prototype.Rh=function(){switch(this.Vh.W().lastPriceAnimation){case 0:return !1;case 1:return !0;case 2:return performance.now()<=this.Oh}},t.prototype.dt=function(t,i){return this.ft?(this.wt(t,i),this.ft=!1,this.Eh=!1):this.Eh&&(this.Ih(),this.Eh=!1),this.zt},t.prototype.wt=function(t,i){this.zt.Z(null);var n=this.Vh.jt().bt(),s=n.ss(),h=this.Vh.kt();if(null!==s&&null!==h){var r=this.Vh.jh(!0);if(!r.qh&&s.Uh(r.vs)){var e={x:n.At(r.vs),y:this.Vh.Ct().xt(r.et,h.St)},u=r.A,a=this.Vh.W().lineWidth,o=Xt(this.Hh(),u);this.zt.Z({gh:u,yh:a,kh:o.kh,Nh:o.Nh,st:o.st,Zs:e});}}},t.prototype.Ih=function(){var t=this.zt.ph();if(null!==t){var i=Xt(this.Hh(),t.gh);t.kh=i.kh,t.Nh=i.Nh,t.st=i.st;}},t.prototype.Hh=function(){return this.Rh()?performance.now()-this.Fh:2599},t}();function Jt(t,i){return Tt(Math.min(Math.max(t,12),30)*i)}function Gt(t,i){switch(t){case"arrowDown":case"arrowUp":return Jt(i,1);case"circle":return Jt(i,.8);case"square":return Jt(i,.7)}}function Qt(t){return St(Jt(t,1))}function ti(t){return Math.max(Jt(t,.1),3)}function ii(t,i,n,s,h){var r=Gt("square",n),e=(r-1)/2,u=t-e,a=i-e;return s>=u&&s<=u+r&&h>=a&&h<=a+r}function ni(t,i,n,s,h){var r=(Gt("arrowUp",h)-1)/2,e=(Tt(h/2)-1)/2;i.beginPath(),t?(i.moveTo(n-r,s),i.lineTo(n,s-r),i.lineTo(n+r,s),i.lineTo(n+e,s),i.lineTo(n+e,s+r),i.lineTo(n-e,s+r),i.lineTo(n-e,s)):(i.moveTo(n-r,s),i.lineTo(n,s+r),i.lineTo(n+r,s),i.lineTo(n+e,s),i.lineTo(n+e,s-r),i.lineTo(n-e,s-r),i.lineTo(n-e,s)),i.fill();}function si(t,i,n,s,h,r){return ii(i,n,s,h,r)}var hi=function(t){function i(){var i=null!==t&&t.apply(this,arguments)||this;return i.Bt=null,i.rh=new Rt,i.R=-1,i.I="",i.Yh="",i}return m(i,t),i.prototype.Z=function(t){this.Bt=t;},i.prototype.eh=function(t,i){this.R===t&&this.I===i||(this.R=t,this.I=i,this.Yh=L(t,i),this.rh.ih());},i.prototype.$h=function(t,i){if(null===this.Bt||null===this.Bt.J)return null;for(var n=this.Bt.J.from;n<this.Bt.J.to;n++){var s=this.Bt.G[n];if(ei(s,t,i))return {Kh:s.Xh,Zh:s.Zh}}return null},i.prototype.Y=function(t,i,n){if(null!==this.Bt&&null!==this.Bt.J){t.textBaseline="middle",t.font=this.Yh;for(var s=this.Bt.J.from;s<this.Bt.J.to;s++){var h=this.Bt.G[s];void 0!==h.Gt&&(h.Gt.Ht=this.rh.Qt(t,h.Gt.Jh),h.Gt.Yt=this.R),ri(h,t);}}},i}(O);function ri(t,i){i.fillStyle=t.A,void 0!==t.Gt&&function(t,i,n,s){t.fillText(i,n,s);}(i,t.Gt.Jh,t.tt-t.Gt.Ht/2,t.Gt.it),function(t,i){if(0===t.hs)return;switch(t.Gh){case"arrowDown":return void ni(!1,i,t.tt,t.it,t.hs);case"arrowUp":return void ni(!0,i,t.tt,t.it,t.hs);case"circle":return void function(t,i,n,s){var h=(Gt("circle",s)-1)/2;t.beginPath(),t.arc(i,n,h,0,2*Math.PI,!1),t.fill();}(i,t.tt,t.it,t.hs);case"square":return void function(t,i,n,s){var h=Gt("square",s),r=(h-1)/2,e=i-r,u=n-r;t.fillRect(e,u,h,h);}(i,t.tt,t.it,t.hs)}t.Gh;}(t,i);}function ei(t,i,n){return !(void 0===t.Gt||!function(t,i,n,s,h,r){var e=s/2;return h>=t&&h<=t+n&&r>=i-e&&r<=i+e}(t.tt,t.Gt.it,t.Gt.Ht,t.Gt.Yt,i,n))||function(t,i,n){if(0===t.hs)return !1;switch(t.Gh){case"arrowDown":case"arrowUp":return si(0,t.tt,t.it,t.hs,i,n);case"circle":return function(t,i,n,s,h){var r=2+Gt("circle",n)/2,e=t-s,u=i-h;return Math.sqrt(e*e+u*u)<=r}(t.tt,t.it,t.hs,i,n);case"square":return ii(t.tt,t.it,t.hs,i,n)}}(t,i,n)}function ui(t,i,n,s,h,r,e,u,a){var o=N(n)?n:n.close,l=N(n)?n:n.high,f=N(n)?n:n.low,c=N(i.size)?Math.max(i.size,0):1,v=Qt(u.ws())*c,_=v/2;switch(t.hs=v,i.position){case"inBar":return t.it=e.xt(o,a),void(void 0!==t.Gt&&(t.Gt.it=t.it+_+r+.6*h));case"aboveBar":return t.it=e.xt(l,a)-_-s.Qh,void 0!==t.Gt&&(t.Gt.it=t.it-_-.6*h,s.Qh+=1.2*h),void(s.Qh+=v+r);case"belowBar":return t.it=e.xt(f,a)+_+s.tr,void 0!==t.Gt&&(t.Gt.it=t.it+_+r+.6*h,s.tr+=1.2*h),void(s.tr+=v+r)}i.position;}var ai=function(){function t(t,i){this.ft=!0,this.ir=!0,this.nr=!0,this.sr=null,this.zt=new hi,this.Vh=t,this.pi=i,this.Bt={G:[],J:null};}return t.prototype.vt=function(t){this.ft=!0,this.nr=!0,"data"===t&&(this.ir=!0);},t.prototype.dt=function(t,i,n){if(!this.Vh.yt())return null;this.ft&&this.Jn();var s=this.pi.W().layout;return this.zt.eh(s.fontSize,s.fontFamily),this.zt.Z(this.Bt),this.zt},t.prototype.hr=function(){if(this.nr){if(this.Vh.rr().length>0){var t=this.pi.bt().ws(),i=ti(t),n=1.5*Qt(t)+2*i;this.sr={above:n,below:n};}else this.sr=null;this.nr=!1;}return this.sr},t.prototype.Jn=function(){var t=this.Vh.Ct(),i=this.pi.bt(),n=this.Vh.rr();this.ir&&(this.Bt.G=n.map((function(t){return {rt:t.time,tt:0,it:0,hs:0,Gh:t.shape,A:t.color,Xh:t.Xh,Zh:t.id,Gt:void 0}})),this.ir=!1);var s=this.pi.W().layout;this.Bt.J=null;var h=i.ss();if(null!==h){var r=this.Vh.kt();if(null!==r&&0!==this.Bt.G.length){var e=NaN,u=ti(i.ws()),a={Qh:u,tr:u};this.Bt.J=Mt(this.Bt.G,h,!0);for(var o=this.Bt.J.from;o<this.Bt.J.to;o++){var l=n[o];l.time!==e&&(a.Qh=u,a.tr=u,e=l.time);var f=this.Bt.G[o];f.tt=i.At(l.time),void 0!==l.text&&l.text.length>0&&(f.Gt={Jh:l.text,it:0,Ht:0,Yt:0});var c=this.Vh.er(l.time);null!==c&&ui(f,l,c,a,s.fontSize,u,t,i,r.St);}this.ft=!1;}}},t}(),oi=function(t){function i(i){return t.call(this,i)||this}return m(i,t),i.prototype.bh=function(t,i){var n=this.wh;n.yt=!1;var s=this.Kn.W();if(s.priceLineVisible&&this.Kn.yt()){var h=this.Kn.jh(0===s.priceLineSource);h.qh||(n.yt=!0,n.it=h.ti,n.A=this.Kn.ur(h.A),n.Ht=i,n.Yt=t,n.Vt=s.priceLineWidth,n.Pt=s.priceLineStyle);}},i}(Ut),li=function(t){function i(i){var n=t.call(this)||this;return n.Rt=i,n}return m(i,t),i.prototype.vi=function(t,i,n){t.yt=!1,i.yt=!1;var s=this.Rt;if(s.yt()){var h=s.W(),r=h.lastValueVisible,e=""!==s.ar(),u=0===h.seriesLastValueMode,a=s.jh(!1);if(!a.qh){r&&(t.Gt=this.lr(a,r,u),t.yt=0!==t.Gt.length),(e||u)&&(i.Gt=this.cr(a,r,e,u),i.yt=i.Gt.length>0);var o=s.ur(a.A),l=M(o);n.t=l.t,n.A=l.i,n.ti=a.ti,i.Tt=s.jt().Dt(a.ti/s.Ct().Yt()),t.Tt=o;}}},i.prototype.cr=function(t,i,n,s){var h="",r=this.Rt.ar();return n&&0!==r.length&&(h+="".concat(r," ")),i&&s&&(h+=this.Rt.Ct().vr()?t._r:t.dr),h.trim()},i.prototype.lr=function(t,i,n){return i?n?this.Rt.Ct().vr()?t.dr:t._r:t.Gt:""},i}(K),fi=function(){function t(t,i){this.wr=t,this.Mr=i;}return t.prototype.br=function(t){return null!==t&&(this.wr===t.wr&&this.Mr===t.Mr)},t.prototype.mr=function(){return new t(this.wr,this.Mr)},t.prototype.pr=function(){return this.wr},t.prototype.gr=function(){return this.Mr},t.prototype.yr=function(){return this.Mr-this.wr},t.prototype.wi=function(){return this.Mr===this.wr||Number.isNaN(this.Mr)||Number.isNaN(this.wr)},t.prototype.Nn=function(i){return null===i?this:new t(Math.min(this.pr(),i.pr()),Math.max(this.gr(),i.gr()))},t.prototype.kr=function(t){if(N(t)&&0!==this.Mr-this.wr){var i=.5*(this.Mr+this.wr),n=this.Mr-i,s=this.wr-i;n*=t,s*=t,this.Mr=i+n,this.wr=i+s;}},t.prototype.Nr=function(t){N(t)&&(this.Mr+=t,this.wr+=t);},t.prototype.Cr=function(){return {minValue:this.wr,maxValue:this.Mr}},t.Sr=function(i){return null===i?null:new t(i.minValue,i.maxValue)},t}(),ci=function(){function t(t,i){this.Tr=t,this.Dr=i||null;}return t.prototype.Ar=function(){return this.Tr},t.prototype.Br=function(){return this.Dr},t.prototype.Cr=function(){return null===this.Tr?null:{priceRange:this.Tr.Cr(),margins:this.Dr||void 0}},t.Sr=function(i){return null===i?null:new t(fi.Sr(i.priceRange),i.margins)},t}(),vi=function(t){function i(i,n){var s=t.call(this,i)||this;return s.Lr=n,s}return m(i,t),i.prototype.bh=function(t,i){var n=this.wh;n.yt=!1;var s=this.Lr.W();if(this.Kn.yt()&&s.lineVisible){var h=this.Lr.Er();null!==h&&(n.yt=!0,n.it=h,n.A=s.color,n.Ht=i,n.Yt=t,n.Vt=s.lineWidth,n.Pt=s.lineStyle);}},i}(Ut),_i=function(t){function i(i,n){var s=t.call(this)||this;return s.Vh=i,s.Lr=n,s}return m(i,t),i.prototype.vi=function(t,i,n){t.yt=!1,i.yt=!1;var s=this.Lr.W(),h=s.axisLabelVisible,r=""!==s.title,e=this.Vh;if(h&&e.yt()){var u=this.Lr.Er();if(null!==u){r&&(i.Gt=s.title,i.yt=!0),i.Tt=e.jt().Dt(u/e.Ct().Yt()),t.Gt=e.Ct().Fr(s.price),t.yt=!0;var a=M(s.color);n.t=a.t,n.A=a.i,n.ti=u;}}},i}(K),di=function(){function t(t,i){this.Vh=t,this.zi=i,this.Or=new vi(t,this),this.uh=new _i(t,this),this.Vr=new jt(this.uh,t,t.jt());}return t.prototype.Pr=function(t){k(this.zi,t),this.vt(),this.Vh.jt().Wr();},t.prototype.W=function(){return this.zi},t.prototype.tn=function(){return [this.Or,this.Vr]},t.prototype.zr=function(){return this.uh},t.prototype.vt=function(){this.Or.vt(),this.uh.vt();},t.prototype.Er=function(){var t=this.Vh,i=t.Ct();if(t.jt().bt().wi()||i.wi())return null;var n=t.kt();return null===n?null:i.xt(this.zi.price,n.St)},t}(),wi=function(t){function i(i){var n=t.call(this)||this;return n.pi=i,n}return m(i,t),i.prototype.jt=function(){return this.pi},i}(Q),Mi={Ds:"",Hs:"",Us:""},bi=function(){function t(t){this.Vh=t;}return t.prototype.As=function(t,i){var n=this.Vh.Rr(),s=this.Vh.W();switch(n){case"Line":return this.Ir(s,t,i);case"Area":return this.jr(s);case"Baseline":return this.qr(s,t,i);case"Bar":return this.Ur(s,t,i);case"Candlestick":return this.Hr(s,t,i);case"Histogram":return this.Yr(s,t,i)}throw new Error("Unknown chart style")},t.prototype.Ur=function(t,i,n){var s=p({},Mi),h=t.upColor,r=t.downColor,e=h,o=r,l=u(this.$r(i,n)),f=a(l.St[0])<=a(l.St[3]);return void 0!==l.A?(s.Ds=l.A,s.Hs=l.A):(s.Ds=f?h:r,s.Hs=f?e:o),s},t.prototype.Hr=function(t,i,n){var s,h,r,e=p({},Mi),o=t.upColor,l=t.downColor,f=t.borderUpColor,c=t.borderDownColor,v=t.wickUpColor,_=t.wickDownColor,d=u(this.$r(i,n)),w=a(d.St[0])<=a(d.St[3]);return e.Ds=null!==(s=d.A)&&void 0!==s?s:w?o:l,e.Hs=null!==(h=d.Tt)&&void 0!==h?h:w?f:c,e.Us=null!==(r=d.qs)&&void 0!==r?r:w?v:_,e},t.prototype.jr=function(t){return p(p({},Mi),{Ds:t.lineColor})},t.prototype.qr=function(t,i,n){var s=u(this.$r(i,n)).St[3]>=t.baseValue.price;return p(p({},Mi),{Ds:s?t.topLineColor:t.bottomLineColor})},t.prototype.Ir=function(t,i,n){var s,h=u(this.$r(i,n));return p(p({},Mi),{Ds:null!==(s=h.A)&&void 0!==s?s:t.color})},t.prototype.Yr=function(t,i,n){var s=p({},Mi),h=u(this.$r(i,n));return s.Ds=void 0!==h.A?h.A:t.color,s},t.prototype.$r=function(t,i){return void 0!==i?i.St:this.Vh.an().Kr(t)},t}(),mi=function(){function t(){this.Xr=[],this.Zr=new Map,this.Jr=new Map;}return t.prototype.Gr=function(){return this.hs()>0?this.Xr[this.Xr.length-1]:null},t.prototype.Qr=function(){return this.hs()>0?this.te(0):null},t.prototype.un=function(){return this.hs()>0?this.te(this.Xr.length-1):null},t.prototype.hs=function(){return this.Xr.length},t.prototype.wi=function(){return 0===this.hs()},t.prototype.Uh=function(t){return null!==this.ie(t,0)},t.prototype.Kr=function(t){return this.ne(t)},t.prototype.ne=function(t,i){void 0===i&&(i=0);var n=this.ie(t,i);return null===n?null:p(p({},this.se(n)),{vs:this.te(n)})},t.prototype.fs=function(){return this.Xr},t.prototype.he=function(t,i,n){if(this.wi())return null;for(var s=null,h=0,r=n;h<r.length;h++){var e=r[h];s=pi(s,this.re(t,i,e));}return s},t.prototype.Z=function(t){this.Jr.clear(),this.Zr.clear(),this.Xr=t;},t.prototype.te=function(t){return this.Xr[t].vs},t.prototype.se=function(t){return this.Xr[t]},t.prototype.ie=function(t,i){var n=this.ee(t);if(null===n&&0!==i)switch(i){case-1:return this.ue(t);case 1:return this.ae(t);default:throw new TypeError("Unknown search mode")}return n},t.prototype.ue=function(t){var i=this.oe(t);return i>0&&(i-=1),i!==this.Xr.length&&this.te(i)<t?i:null},t.prototype.ae=function(t){var i=this.le(t);return i!==this.Xr.length&&t<this.te(i)?i:null},t.prototype.ee=function(t){var i=this.oe(t);return i===this.Xr.length||t<this.Xr[i].vs?null:i},t.prototype.oe=function(t){return vt(this.Xr,t,(function(t,i){return t.vs<i}))},t.prototype.le=function(t){return _t(this.Xr,t,(function(t,i){return i.vs>t}))},t.prototype.fe=function(t,i,n){for(var s=null,h=t;h<i;h++){var r=this.Xr[h].St[n];Number.isNaN(r)||(null===s?s={ce:r,ve:r}:(r<s.ce&&(s.ce=r),r>s.ve&&(s.ve=r)));}return s},t.prototype.re=function(t,i,n){if(this.wi())return null;var s=null,h=u(this.Qr()),r=u(this.un()),e=Math.max(t,h),a=Math.min(i,r),o=30*Math.ceil(e/30),l=Math.max(o,30*Math.floor(a/30)),f=this.oe(e),c=this.le(Math.min(a,o,i));s=pi(s,this.fe(f,c,n));var v=this.Zr.get(n);void 0===v&&(v=new Map,this.Zr.set(n,v));for(var _=Math.max(o+1,e);_<l;_+=30){var d=Math.floor(_/30),w=v.get(d);if(void 0===w){var M=this.oe(30*d),b=this.le(30*(d+1)-1);w=this.fe(M,b,n),v.set(d,w);}s=pi(s,w);}f=this.oe(l),c=this.le(a);return s=pi(s,this.fe(f,c,n))},t}();function pi(t,i){return null===t?i:null===i?t:{ce:Math.min(t.ce,i.ce),ve:Math.max(t.ve,i.ve)}}var gi=function(t){function i(i,n,s){var h=t.call(this,i)||this;h.Bt=new mi,h.Or=new oi(h),h._e=[],h.de=new Ht(h),h.we=null,h.Me=null,h.be=[],h.me=[],h.pe=null,h.zi=n,h.ge=s;var r=new li(h);return h.Ei=[r],h.Vr=new jt(r,h,i),"Area"!==s&&"Line"!==s&&"Baseline"!==s||(h.we=new Zt(h)),h.ye(),h.ke(),h}return m(i,t),i.prototype.g=function(){null!==this.pe&&clearTimeout(this.pe);},i.prototype.ur=function(t){return this.zi.priceLineColor||t},i.prototype.jh=function(t){var i={qh:!0},n=this.Ct();if(this.jt().bt().wi()||n.wi()||this.Bt.wi())return i;var s,h,r=this.jt().bt().ss(),e=this.kt();if(null===r||null===e)return i;if(t){var u=this.Bt.Gr();if(null===u)return i;s=u,h=u.vs;}else {var a=this.Bt.ne(r.jn(),-1);if(null===a)return i;if(null===(s=this.Bt.Kr(a.vs)))return i;h=a.vs;}var o=s.St[3],l=this.ls().As(h,{St:s}),f=n.xt(o,e.St);return {qh:!1,et:o,Gt:n.Mi(o,e.St),_r:n.Fr(o),dr:n.Ne(o,e.St),A:l.Ds,ti:f,vs:h}},i.prototype.ls=function(){return null!==this.Me||(this.Me=new bi(this)),this.Me},i.prototype.W=function(){return this.zi},i.prototype.Pr=function(t){var i=t.priceScaleId;void 0!==i&&i!==this.zi.priceScaleId&&this.jt().xe(this,i),k(this.zi,t),null!==this.ki&&void 0!==t.scaleMargins&&this.ki.Pr({scaleMargins:t.scaleMargins}),void 0!==t.priceFormat&&(this.ye(),this.jt().Ce()),this.jt().Se(this),this.jt().Te(),this.Hi.vt("options");},i.prototype.Z=function(t,i){this.Bt.Z(t),this.De(),this.Hi.vt("data"),this.Ri.vt("data"),null!==this.we&&(i&&i.Ae?this.we.Wh():0===t.length&&this.we.Ph());var n=this.jt().oh(this);this.jt().Be(n),this.jt().Se(this),this.jt().Te(),this.jt().Wr();},i.prototype.Le=function(t){this.be=t.map((function(t){return p({},t)})),this.De();var i=this.jt().oh(this);this.Ri.vt("data"),this.jt().Be(i),this.jt().Se(this),this.jt().Te(),this.jt().Wr();},i.prototype.rr=function(){return this.me},i.prototype.Ee=function(t){var i=new di(this,t);return this._e.push(i),this.jt().Se(this),i},i.prototype.Fe=function(t){var i=this._e.indexOf(t);-1!==i&&this._e.splice(i,1),this.jt().Se(this);},i.prototype.Rr=function(){return this.ge},i.prototype.kt=function(){var t=this.Oe();return null===t?null:{St:t.St[3],Ve:t.rt}},i.prototype.Oe=function(){var t=this.jt().bt().ss();if(null===t)return null;var i=t.In();return this.Bt.ne(i,1)},i.prototype.an=function(){return this.Bt},i.prototype.er=function(t){var i=this.Bt.Kr(t);return null===i?null:"Bar"===this.ge||"Candlestick"===this.ge?{open:i.St[0],high:i.St[1],low:i.St[2],close:i.St[3]}:i.St[3]},i.prototype.Pe=function(t){var i=this,n=this.we;return null!==n&&n.yt()?(null===this.pe&&n.Rh()&&(this.pe=setTimeout((function(){i.pe=null,i.jt().We();}),0)),n.zh(),[n]):[]},i.prototype.tn=function(){var t=[];this.ze()||t.push(this.de);for(var i=0,n=this._e;i<n.length;i++){var s=n[i];t.push.apply(t,s.tn());}return t.push(this.Hi,this.Or,this.Vr,this.Ri),t},i.prototype.nn=function(t,i){if(i!==this.ki&&!this.ze())return [];for(var n=g([],this.Ei,!0),s=0,h=this._e;s<h.length;s++){var r=h[s];n.push(r.zr());}return n},i.prototype.Re=function(t,i){var n=this;if(void 0!==this.zi.autoscaleInfoProvider){var s=this.zi.autoscaleInfoProvider((function(){var s=n.Ie(t,i);return null===s?null:s.Cr()}));return ci.Sr(s)}return this.Ie(t,i)},i.prototype.je=function(){return this.zi.priceFormat.minMove},i.prototype.qe=function(){return this.Ue},i.prototype.hn=function(){var t;this.Hi.vt(),this.Ri.vt();for(var i=0,n=this.Ei;i<n.length;i++){n[i].vt();}for(var s=0,h=this._e;s<h.length;s++){h[s].vt();}this.Or.vt(),this.de.vt(),null===(t=this.we)||void 0===t||t.vt();},i.prototype.Ct=function(){return u(t.prototype.Ct.call(this))},i.prototype.gt=function(t){if(!(("Line"===this.ge||"Area"===this.ge||"Baseline"===this.ge)&&this.zi.crosshairMarkerVisible))return null;var i=this.Bt.Kr(t);return null===i?null:{et:i.St[3],st:this.He(),Tt:this.Ye(),Nt:this.$e(t)}},i.prototype.ar=function(){return this.zi.title},i.prototype.yt=function(){return this.zi.visible},i.prototype.ze=function(){return !it(this.Ct().Ke())},i.prototype.Ie=function(t,i){if(!x(t)||!x(i)||this.Bt.wi())return null;var n="Line"===this.ge||"Area"===this.ge||"Baseline"===this.ge||"Histogram"===this.ge?[3]:[2,1],s=this.Bt.he(t,i,n),h=null!==s?new fi(s.ce,s.ve):null;if("Histogram"===this.Rr()){var r=this.zi.base,e=new fi(r,r);h=null!==h?h.Nn(e):e;}return new ci(h,this.Ri.hr())},i.prototype.He=function(){switch(this.ge){case"Line":case"Area":case"Baseline":return this.zi.crosshairMarkerRadius}return 0},i.prototype.Ye=function(){switch(this.ge){case"Line":case"Area":case"Baseline":var t=this.zi.crosshairMarkerBorderColor;if(0!==t.length)return t}return null},i.prototype.$e=function(t){switch(this.ge){case"Line":case"Area":case"Baseline":var i=this.zi.crosshairMarkerBackgroundColor;if(0!==i.length)return i}return this.ls().As(t).Ds},i.prototype.ye=function(){switch(this.zi.priceFormat.type){case"custom":this.Ue={format:this.zi.priceFormat.formatter};break;case"volume":this.Ue=new ut(this.zi.priceFormat.precision);break;case"percent":this.Ue=new et(this.zi.priceFormat.precision);break;default:var t=Math.pow(10,this.zi.priceFormat.precision);this.Ue=new rt(t,this.zi.priceFormat.minMove*t);}null!==this.ki&&this.ki.Xe();},i.prototype.De=function(){var t=this,i=this.jt().bt();if(i.wi()||0===this.Bt.hs())this.me=[];else {var n=u(this.Bt.Qr());this.me=this.be.map((function(s,h){var r=u(i.Ze(s.time,!0)),e=r<n?1:-1;return {time:u(t.Bt.ne(r,e)).vs,position:s.position,shape:s.shape,color:s.color,id:s.id,Xh:h,text:s.text,size:s.size}}));}},i.prototype.ke=function(){switch(this.Ri=new ai(this,this.jt()),this.ge){case"Bar":this.Hi=new kt(this,this.jt());break;case"Candlestick":this.Hi=new Et(this,this.jt());break;case"Line":this.Hi=new Wt(this,this.jt());break;case"Area":this.Hi=new pt(this,this.jt());break;case"Baseline":this.Hi=new Bt(this,this.jt());break;case"Histogram":this.Hi=new Pt(this,this.jt());break;default:throw Error("Unknown chart style assigned: "+this.ge)}},i}(wi),yi=function(){function t(t){this.zi=t;}return t.prototype.Je=function(t,i,n){var s=t;if(0===this.zi.mode)return s;var h=n.ji(),r=h.kt();if(null===r)return s;var e=h.xt(t,r),u=n.Ge().filter((function(t){return t instanceof gi})).reduce((function(t,s){if(n.lh(s)||!s.yt())return t;var h=s.Ct(),r=s.an();if(h.wi()||!r.Uh(i))return t;var e=r.Kr(i);if(null===e)return t;var u=a(s.kt());return t.concat([h.xt(e.St[3],u.St)])}),[]);if(0===u.length)return s;u.sort((function(t,i){return Math.abs(t-e)-Math.abs(i-e)}));var o=u[0];return s=h.qi(o,r)},t}(),ki=function(){function t(){this.Bt=null;}return t.prototype.Z=function(t){this.Bt=t;},t.prototype.H=function(t,i,n,h){var r=this;if(null!==this.Bt){var e=Math.max(1,Math.floor(i));t.lineWidth=e;var a=Math.ceil(this.Bt.Ot*i),o=Math.ceil(this.Bt.Ft*i);!function(t,i){t.save(),t.lineWidth%2&&t.translate(.5,.5),i(),t.restore();}(t,(function(){var n=u(r.Bt);if(n.Qe){t.strokeStyle=n.tu,s(t,n.iu),t.beginPath();for(var h=0,l=n.nu;h<l.length;h++){var f=l[h],c=Math.round(f.su*i);t.moveTo(c,-e),t.lineTo(c,a+e);}t.stroke();}if(n.hu){t.strokeStyle=n.ru,s(t,n.eu),t.beginPath();for(var v=0,_=n.uu;v<_.length;v++){var d=_[v],w=Math.round(d.su*i);t.moveTo(-e,w),t.lineTo(o+e,w);}t.stroke();}}));}},t}(),Ni=function(){function t(t){this.zt=new ki,this.ft=!0,this.Di=t;}return t.prototype.vt=function(){this.ft=!0;},t.prototype.dt=function(t,i){if(this.ft){var n=this.Di.jt().W().grid,s={Ot:t,Ft:i,hu:n.horzLines.visible,Qe:n.vertLines.visible,ru:n.horzLines.color,tu:n.vertLines.color,eu:n.horzLines.style,iu:n.vertLines.style,uu:this.Di.ji().au(),nu:this.Di.jt().bt().au()||[]};this.zt.Z(s),this.ft=!1;}return this.zt},t}(),xi=function(){function t(t){this.Hi=new Ni(t);}return t.prototype.ou=function(){return this.Hi},t}(),Ci={lu:4,fu:1e-4};function Si(t,i){var n=100*(t-i)/i;return i<0?-n:n}function Ti(t,i){var n=Si(t.pr(),i),s=Si(t.gr(),i);return new fi(n,s)}function Di(t,i){var n=100*(t-i)/i+100;return i<0?-n:n}function Ai(t,i){var n=Di(t.pr(),i),s=Di(t.gr(),i);return new fi(n,s)}function Bi(t,i){var n=Math.abs(t);if(n<1e-15)return 0;var s=Ct(n+i.fu)+i.lu;return t<0?-s:s}function Li(t,i){var n=Math.abs(t);if(n<1e-15)return 0;var s=Math.pow(10,n-i.lu)-i.fu;return t<0?-s:s}function Ei(t,i){if(null===t)return null;var n=Bi(t.pr(),i),s=Bi(t.gr(),i);return new fi(n,s)}function Fi(t,i){if(null===t)return null;var n=Li(t.pr(),i),s=Li(t.gr(),i);return new fi(n,s)}function Oi(t){if(null===t)return Ci;var i=Math.abs(t.gr()-t.pr());if(i>=1||i<1e-15)return Ci;var n=Math.ceil(Math.abs(Math.log10(i))),s=Ci.lu+n;return {lu:s,fu:1/Math.pow(10,s)}}var Vi,Pi=function(){function t(t,i){if(this.cu=t,this.vu=i,function(t){if(t<0)return !1;for(var i=t;i>1;i/=10)if(i%10!=0)return !1;return !0}(this.cu))this._u=[2,2.5,2];else {this._u=[];for(var n=this.cu;1!==n;){if(n%2==0)this._u.push(2),n/=2;else {if(n%5!=0)throw new Error("unexpected base");this._u.push(2,2.5),n/=5;}if(this._u.length>100)throw new Error("something wrong with base")}}}return t.prototype.du=function(t,i,n){for(var s,h,r,e=0===this.cu?0:1/this.cu,u=Math.pow(10,Math.max(0,Math.ceil(Ct(t-i)))),a=0,o=this.vu[0];;){var l=xt(u,e,1e-14)&&u>e+1e-14,f=xt(u,n*o,1e-14),c=xt(u,1,1e-14);if(!(l&&f&&c))break;u/=o,o=this.vu[++a%this.vu.length];}if(u<=e+1e-14&&(u=e),u=Math.max(1,u),this._u.length>0&&(s=u,h=1,r=1e-14,Math.abs(s-h)<r))for(a=0,o=this._u[0];xt(u,n*o,1e-14)&&u>e+1e-14;)u/=o,o=this._u[++a%this._u.length];return u},t}(),Wi=function(){function t(t,i,n,s){this.wu=[],this._i=t,this.cu=i,this.Mu=n,this.bu=s;}return t.prototype.du=function(t,i){if(t<i)throw new Error("high < low");var n=this._i.Yt(),s=(t-i)*this.mu()/n,h=new Pi(this.cu,[2,2.5,2]),r=new Pi(this.cu,[2,2,2.5]),e=new Pi(this.cu,[2.5,2,2]),u=[];return u.push(h.du(t,i,s),r.du(t,i,s),e.du(t,i,s)),function(t){if(t.length<1)throw Error("array is empty");for(var i=t[0],n=1;n<t.length;++n)t[n]<i&&(i=t[n]);return i}(u)},t.prototype.pu=function(){var t=this._i,i=t.kt();if(null!==i){var n=t.Yt(),s=this.Mu(n-1,i),h=this.Mu(0,i),r=this._i.W().entireTextOnly?this.gu()/2:0,e=r,u=n-1-r,a=Math.max(s,h),o=Math.min(s,h);if(a!==o){for(var l=this.du(a,o),f=a%l,c=a>=o?1:-1,v=null,_=0,d=a-(f+=f<0?l:0);d>o;d-=l){var w=this.bu(d,i,!0);null!==v&&Math.abs(w-v)<this.mu()||(w<e||w>u||(_<this.wu.length?(this.wu[_].su=w,this.wu[_].yu=t.ku(d)):this.wu.push({su:w,yu:t.ku(d)}),_++,v=w,t.Nu()&&(l=this.du(d*c,o))));}this.wu.length=_;}else this.wu=[];}else this.wu=[];},t.prototype.au=function(){return this.wu},t.prototype.gu=function(){return this._i.S()},t.prototype.mu=function(){return Math.ceil(2.5*this.gu())},t}();function zi(t){return t.slice().sort((function(t,i){return u(t.xi())-u(i.xi())}))}!function(t){t[t.Normal=0]="Normal",t[t.Logarithmic=1]="Logarithmic",t[t.Percentage=2]="Percentage",t[t.IndexedTo100=3]="IndexedTo100";}(Vi||(Vi={}));var Ri=new et,Ii=new rt(100,1),ji=function(){function t(t,i,n,s){this.xu=0,this.Cu=null,this.Tr=null,this.Su=null,this.Tu={Du:!1,Au:null},this.Bu=0,this.Lu=0,this.Eu=new y,this.Fu=new y,this.Ou=[],this.Vu=null,this.Pu=null,this.Wu=null,this.zu=null,this.Ue=Ii,this.Ru=Oi(null),this.Iu=t,this.zi=i,this.ju=n,this.qu=s,this.Uu=new Wi(this,100,this.Hu.bind(this),this.Yu.bind(this));}return t.prototype.Ke=function(){return this.Iu},t.prototype.W=function(){return this.zi},t.prototype.Pr=function(t){if(k(this.zi,t),this.Xe(),void 0!==t.mode&&this.$u({mh:t.mode}),void 0!==t.scaleMargins){var i=e(t.scaleMargins.top),n=e(t.scaleMargins.bottom);if(i<0||i>1)throw new Error("Invalid top margin - expect value between 0 and 1, given=".concat(i));if(n<0||n>1||i+n>1)throw new Error("Invalid bottom margin - expect value between 0 and 1, given=".concat(n));if(i+n>1)throw new Error("Invalid margins - sum of margins must be less than 1, given=".concat(i+n));this.Ku(),this.Pu=null;}},t.prototype.Xu=function(){return this.zi.autoScale},t.prototype.Nu=function(){return 1===this.zi.mode},t.prototype.vr=function(){return 2===this.zi.mode},t.prototype.Zu=function(){return 3===this.zi.mode},t.prototype.mh=function(){return {_n:this.zi.autoScale,Ju:this.zi.invertScale,mh:this.zi.mode}},t.prototype.$u=function(t){var i=this.mh(),n=null;void 0!==t._n&&(this.zi.autoScale=t._n),void 0!==t.mh&&(this.zi.mode=t.mh,2!==t.mh&&3!==t.mh||(this.zi.autoScale=!0),this.Tu.Du=!1),1===i.mh&&t.mh!==i.mh&&(!function(t,i){if(null===t)return !1;var n=Li(t.pr(),i),s=Li(t.gr(),i);return isFinite(n)&&isFinite(s)}(this.Tr,this.Ru)?this.zi.autoScale=!0:null!==(n=Fi(this.Tr,this.Ru))&&this.Gu(n)),1===t.mh&&t.mh!==i.mh&&null!==(n=Ei(this.Tr,this.Ru))&&this.Gu(n);var s=i.mh!==this.zi.mode;s&&(2===i.mh||this.vr())&&this.Xe(),s&&(3===i.mh||this.Zu())&&this.Xe(),void 0!==t.Ju&&i.Ju!==t.Ju&&(this.zi.invertScale=t.Ju,this.Qu()),this.Fu.m(i,this.mh());},t.prototype.ta=function(){return this.Fu},t.prototype.S=function(){return this.ju.fontSize},t.prototype.Yt=function(){return this.xu},t.prototype.ia=function(t){this.xu!==t&&(this.xu=t,this.Ku(),this.Pu=null);},t.prototype.na=function(){if(this.Cu)return this.Cu;var t=this.Yt()-this.sa()-this.ha();return this.Cu=t,t},t.prototype.Ar=function(){return this.ra(),this.Tr},t.prototype.Gu=function(t,i){var n=this.Tr;(i||null===n&&null!==t||null!==n&&!n.br(t))&&(this.Pu=null,this.Tr=t);},t.prototype.wi=function(){return this.ra(),0===this.xu||!this.Tr||this.Tr.wi()},t.prototype.ea=function(t){return this.Ju()?t:this.Yt()-1-t},t.prototype.xt=function(t,i){return this.vr()?t=Si(t,i):this.Zu()&&(t=Di(t,i)),this.Yu(t,i)},t.prototype.us=function(t,i,n){this.ra();for(var s=this.ha(),h=u(this.Ar()),r=h.pr(),e=h.gr(),a=this.na()-1,o=this.Ju(),l=a/(e-r),f=void 0===n?0:n.from,c=void 0===n?t.length:n.to,v=this.ua(),_=f;_<c;_++){var d=t[_],w=d.et;if(!isNaN(w)){var M=w;null!==v&&(M=v(d.et,i));var b=s+l*(M-r),m=o?b:this.xu-1-b;d.it=m;}}},t.prototype.Ss=function(t,i,n){this.ra();for(var s=this.ha(),h=u(this.Ar()),r=h.pr(),e=h.gr(),a=this.na()-1,o=this.Ju(),l=a/(e-r),f=void 0===n?0:n.from,c=void 0===n?t.length:n.to,v=this.ua(),_=f;_<c;_++){var d=t[_],w=d.open,M=d.high,b=d.low,m=d.close;null!==v&&(w=v(d.open,i),M=v(d.high,i),b=v(d.low,i),m=v(d.close,i));var p=s+l*(w-r),g=o?p:this.xu-1-p;d.xs=g,p=s+l*(M-r),g=o?p:this.xu-1-p,d.ys=g,p=s+l*(b-r),g=o?p:this.xu-1-p,d.ks=g,p=s+l*(m-r),g=o?p:this.xu-1-p,d.Cs=g;}},t.prototype.qi=function(t,i){var n=this.Hu(t,i);return this.aa(n,i)},t.prototype.aa=function(t,i){var n=t;return this.vr()?n=function(t,i){return i<0&&(t=-t),t/100*i+i}(n,i):this.Zu()&&(n=function(t,i){return t-=100,i<0&&(t=-t),t/100*i+i}(n,i)),n},t.prototype.Ge=function(){return this.Ou},t.prototype.oa=function(){if(this.Vu)return this.Vu;for(var t=[],i=0;i<this.Ou.length;i++){var n=this.Ou[i];null===n.xi()&&n.Ci(i+1),t.push(n);}return t=zi(t),this.Vu=t,this.Vu},t.prototype.la=function(t){-1===this.Ou.indexOf(t)&&(this.Ou.push(t),this.Xe(),this.fa());},t.prototype.ca=function(t){var i=this.Ou.indexOf(t);if(-1===i)throw new Error("source is not attached to scale");this.Ou.splice(i,1),0===this.Ou.length&&(this.$u({_n:!0}),this.Gu(null)),this.Xe(),this.fa();},t.prototype.kt=function(){for(var t=null,i=0,n=this.Ou;i<n.length;i++){var s=n[i].kt();null!==s&&((null===t||s.Ve<t.Ve)&&(t=s));}return null===t?null:t.St},t.prototype.Ju=function(){return this.zi.invertScale},t.prototype.au=function(){var t=null===this.kt();if(null!==this.Pu&&(t||this.Pu.va===t))return this.Pu.au;this.Uu.pu();var i=this.Uu.au();return this.Pu={au:i,va:t},this.Eu.m(),i},t.prototype._a=function(){return this.Eu},t.prototype.da=function(t){this.vr()||this.Zu()||null===this.Wu&&null===this.Su&&(this.wi()||(this.Wu=this.xu-t,this.Su=u(this.Ar()).mr()));},t.prototype.wa=function(t){if(!this.vr()&&!this.Zu()&&null!==this.Wu){this.$u({_n:!1}),(t=this.xu-t)<0&&(t=0);var i=(this.Wu+.2*(this.xu-1))/(t+.2*(this.xu-1)),n=u(this.Su).mr();i=Math.max(i,.1),n.kr(i),this.Gu(n);}},t.prototype.Ma=function(){this.vr()||this.Zu()||(this.Wu=null,this.Su=null);},t.prototype.ba=function(t){this.Xu()||null===this.zu&&null===this.Su&&(this.wi()||(this.zu=t,this.Su=u(this.Ar()).mr()));},t.prototype.ma=function(t){if(!this.Xu()&&null!==this.zu){var i=u(this.Ar()).yr()/(this.na()-1),n=t-this.zu;this.Ju()&&(n*=-1);var s=n*i,h=u(this.Su).mr();h.Nr(s),this.Gu(h,!0),this.Pu=null;}},t.prototype.pa=function(){this.Xu()||null!==this.zu&&(this.zu=null,this.Su=null);},t.prototype.qe=function(){return this.Ue||this.Xe(),this.Ue},t.prototype.Mi=function(t,i){switch(this.zi.mode){case 2:return this.qe().format(Si(t,i));case 3:return this.qe().format(Di(t,i));default:return this.ga(t)}},t.prototype.ku=function(t){switch(this.zi.mode){case 2:case 3:return this.qe().format(t);default:return this.ga(t)}},t.prototype.Fr=function(t){return this.ga(t,u(this.ya()).qe())},t.prototype.Ne=function(t,i){return t=Si(t,i),Ri.format(t)},t.prototype.ka=function(){return this.Ou},t.prototype.Na=function(t){this.Tu={Au:t,Du:!1};},t.prototype.hn=function(){this.Ou.forEach((function(t){return t.hn()}));},t.prototype.Xe=function(){this.Pu=null;var t=this.ya(),i=100;null!==t&&(i=Math.round(1/t.je())),this.Ue=Ii,this.vr()?(this.Ue=Ri,i=100):this.Zu()?(this.Ue=new rt(100,1),i=100):null!==t&&(this.Ue=t.qe()),this.Uu=new Wi(this,i,this.Hu.bind(this),this.Yu.bind(this)),this.Uu.pu();},t.prototype.fa=function(){this.Vu=null;},t.prototype.ya=function(){return this.Ou[0]||null},t.prototype.sa=function(){return this.Ju()?this.zi.scaleMargins.bottom*this.Yt()+this.Lu:this.zi.scaleMargins.top*this.Yt()+this.Bu},t.prototype.ha=function(){return this.Ju()?this.zi.scaleMargins.top*this.Yt()+this.Bu:this.zi.scaleMargins.bottom*this.Yt()+this.Lu},t.prototype.ra=function(){this.Tu.Du||(this.Tu.Du=!0,this.xa());},t.prototype.Ku=function(){this.Cu=null;},t.prototype.Yu=function(t,i){if(this.ra(),this.wi())return 0;t=this.Nu()&&t?Bi(t,this.Ru):t;var n=u(this.Ar()),s=this.ha()+(this.na()-1)*(t-n.pr())/n.yr();return this.ea(s)},t.prototype.Hu=function(t,i){if(this.ra(),this.wi())return 0;var n=this.ea(t),s=u(this.Ar()),h=s.pr()+s.yr()*((n-this.ha())/(this.na()-1));return this.Nu()?Li(h,this.Ru):h},t.prototype.Qu=function(){this.Pu=null,this.Uu.pu();},t.prototype.xa=function(){var t=this.Tu.Au;if(null!==t){for(var i,n,s=null,h=0,r=0,e=0,a=this.ka();e<a.length;e++){var o=a[e];if(o.yt()){var l=o.kt();if(null!==l){var f=o.Re(t.In(),t.jn()),c=f&&f.Ar();if(null!==c){switch(this.zi.mode){case 1:c=Ei(c,this.Ru);break;case 2:c=Ti(c,l.St);break;case 3:c=Ai(c,l.St);}if(s=null===s?c:s.Nn(u(c)),null!==f){var v=f.Br();null!==v&&(h=Math.max(h,v.above),r=Math.max(h,v.below));}}}}}if(h===this.Bu&&r===this.Lu||(this.Bu=h,this.Lu=r,this.Pu=null,this.Ku()),null!==s){if(s.pr()===s.gr()){var _=this.ya(),d=5*(null===_||this.vr()||this.Zu()?1:_.je());this.Nu()&&(s=Fi(s,this.Ru)),s=new fi(s.pr()-d,s.gr()+d),this.Nu()&&(s=Ei(s,this.Ru));}if(this.Nu()){var w=Fi(s,this.Ru),M=Oi(w);if(i=M,n=this.Ru,i.lu!==n.lu||i.fu!==n.fu){var b=null!==this.Su?Fi(this.Su,this.Ru):null;this.Ru=M,s=Ei(w,M),null!==b&&(this.Su=Ei(b,M));}}this.Gu(s);}else null===this.Tr&&(this.Gu(new fi(-.5,.5)),this.Ru=Oi(null));this.Tu.Du=!0;}},t.prototype.ua=function(){var t=this;return this.vr()?Si:this.Zu()?Di:this.Nu()?function(i){return Bi(i,t.Ru)}:null},t.prototype.ga=function(t,i){return void 0===this.qu.priceFormatter?(void 0===i&&(i=this.qe()),i.format(t)):this.qu.priceFormatter(t)},t}(),qi=function(){function t(t,i){this.Ou=[],this.Ca=new Map,this.xu=0,this.hh=0,this.Sa=1e3,this.Vu=null,this.Ta=new y,this.Da=t,this.pi=i,this.Aa=new xi(this);var n=i.W();this.Ba=this.La("left",n.leftPriceScale),this.Ea=this.La("right",n.rightPriceScale),this.Ba.ta().u(this.Fa.bind(this,this.Ba),this),this.Ea.ta().u(this.Fa.bind(this,this.Ba),this),this.Oa(n);}return t.prototype.Oa=function(t){if(t.leftPriceScale&&this.Ba.Pr(t.leftPriceScale),t.rightPriceScale&&this.Ea.Pr(t.rightPriceScale),t.localization&&(this.Ba.Xe(),this.Ea.Xe()),t.overlayPriceScales)for(var i=0,n=Array.from(this.Ca.values());i<n.length;i++){var s=u(n[i][0].Ct());s.Pr(t.overlayPriceScales),t.localization&&s.Xe();}},t.prototype.Va=function(t){switch(t){case"left":return this.Ba;case"right":return this.Ea}return this.Ca.has(t)?e(this.Ca.get(t))[0].Ct():null},t.prototype.g=function(){this.jt().Pa().M(this),this.Ba.ta().M(this),this.Ea.ta().M(this),this.Ou.forEach((function(t){t.g&&t.g();})),this.Ta.m();},t.prototype.Wa=function(){return this.Sa},t.prototype.za=function(t){this.Sa=t;},t.prototype.jt=function(){return this.pi},t.prototype.Ht=function(){return this.hh},t.prototype.Yt=function(){return this.xu},t.prototype.Ra=function(t){this.hh=t,this.Ia();},t.prototype.ia=function(t){var i=this;this.xu=t,this.Ba.ia(t),this.Ea.ia(t),this.Ou.forEach((function(n){if(i.lh(n)){var s=n.Ct();null!==s&&s.ia(t);}})),this.Ia();},t.prototype.Ge=function(){return this.Ou},t.prototype.lh=function(t){var i=t.Ct();return null===i||this.Ba!==i&&this.Ea!==i},t.prototype.la=function(t,i,n){var s=void 0!==n?n:this.qa().ja+1;this.Ua(t,i,s);},t.prototype.ca=function(t){var i=this.Ou.indexOf(t);r(-1!==i,"removeDataSource: invalid data source"),this.Ou.splice(i,1);var n=u(t.Ct()).Ke();if(this.Ca.has(n)){var s=e(this.Ca.get(n)),h=s.indexOf(t);-1!==h&&(s.splice(h,1),0===s.length&&this.Ca.delete(n));}var a=t.Ct();a&&a.Ge().indexOf(t)>=0&&a.ca(t),null!==a&&(a.fa(),this.Ha(a)),this.Vu=null;},t.prototype._h=function(t){return t===this.Ba?"left":t===this.Ea?"right":"overlay"},t.prototype.Ya=function(){return this.Ba},t.prototype.$a=function(){return this.Ea},t.prototype.Ka=function(t,i){t.da(i);},t.prototype.Xa=function(t,i){t.wa(i),this.Ia();},t.prototype.Za=function(t){t.Ma();},t.prototype.Ja=function(t,i){t.ba(i);},t.prototype.Ga=function(t,i){t.ma(i),this.Ia();},t.prototype.Qa=function(t){t.pa();},t.prototype.Ia=function(){this.Ou.forEach((function(t){t.hn();}));},t.prototype.ji=function(){var t=null;return this.pi.W().rightPriceScale.visible&&0!==this.Ea.Ge().length?t=this.Ea:this.pi.W().leftPriceScale.visible&&0!==this.Ba.Ge().length?t=this.Ba:0!==this.Ou.length&&(t=this.Ou[0].Ct()),null===t&&(t=this.Ea),t},t.prototype.fh=function(){var t=null;return this.pi.W().rightPriceScale.visible?t=this.Ea:this.pi.W().leftPriceScale.visible&&(t=this.Ba),t},t.prototype.Ha=function(t){null!==t&&t.Xu()&&this.io(t);},t.prototype.no=function(t){var i=this.Da.ss();t.$u({_n:!0}),null!==i&&t.Na(i),this.Ia();},t.prototype.so=function(){this.io(this.Ba),this.io(this.Ea);},t.prototype.ho=function(){var t=this;this.Ha(this.Ba),this.Ha(this.Ea),this.Ou.forEach((function(i){t.lh(i)&&t.Ha(i.Ct());})),this.Ia(),this.pi.Wr();},t.prototype.oa=function(){return null===this.Vu&&(this.Vu=zi(this.Ou)),this.Vu},t.prototype.ro=function(){return this.Ta},t.prototype.eo=function(){return this.Aa},t.prototype.io=function(t){var i=t.ka();if(i&&i.length>0&&!this.Da.wi()){var n=this.Da.ss();null!==n&&t.Na(n);}t.hn();},t.prototype.qa=function(){var t=this.oa();if(0===t.length)return {uo:0,ja:0};for(var i=0,n=0,s=0;s<t.length;s++){var h=t[s].xi();null!==h&&(h<i&&(i=h),h>n&&(n=h));}return {uo:i,ja:n}},t.prototype.Ua=function(t,i,n){var s=this.Va(i);if(null===s&&(s=this.La(i,this.pi.W().overlayPriceScales)),this.Ou.push(t),!it(i)){var h=this.Ca.get(i)||[];h.push(t),this.Ca.set(i,h);}s.la(t),t.Si(s),t.Ci(n),this.Ha(s),this.Vu=null;},t.prototype.Fa=function(t,i,n){i.mh!==n.mh&&this.io(t);},t.prototype.La=function(t,i){var n=p({visible:!0,autoScale:!0},T(i)),s=new ji(t,n,this.pi.W().layout,this.pi.W().localization);return s.ia(this.Yt()),s},t}(),Ui=function(t){return t.getUTCFullYear()};function Hi(t,i,n){return i.replace(/yyyy/g,function(t){return ht(Ui(t),4)}(t)).replace(/yy/g,function(t){return ht(Ui(t)%100,2)}(t)).replace(/MMMM/g,function(t,i){return new Date(t.getUTCFullYear(),t.getUTCMonth(),1).toLocaleString(i,{month:"long"})}(t,n)).replace(/MMM/g,function(t,i){return new Date(t.getUTCFullYear(),t.getUTCMonth(),1).toLocaleString(i,{month:"short"})}(t,n)).replace(/MM/g,function(t){return ht(function(t){return t.getUTCMonth()+1}(t),2)}(t)).replace(/dd/g,function(t){return ht(function(t){return t.getUTCDate()}(t),2)}(t))}var Yi=function(){function t(t,i){void 0===t&&(t="yyyy-MM-dd"),void 0===i&&(i="default"),this.ao=t,this.oo=i;}return t.prototype.lo=function(t){return Hi(t,this.ao,this.oo)},t}(),$i=function(){function t(t){this.fo=t||"%h:%m:%s";}return t.prototype.lo=function(t){return this.fo.replace("%h",ht(t.getUTCHours(),2)).replace("%m",ht(t.getUTCMinutes(),2)).replace("%s",ht(t.getUTCSeconds(),2))},t}(),Ki={co:"yyyy-MM-dd",vo:"%h:%m:%s",_o:" ",do:"default"},Xi=function(){function t(t){void 0===t&&(t={});var i=p(p({},Ki),t);this.wo=new Yi(i.co,i.do),this.Mo=new $i(i.vo),this.bo=i._o;}return t.prototype.lo=function(t){return "".concat(this.wo.lo(t)).concat(this.bo).concat(this.Mo.lo(t))},t}();var Zi=function(){function t(t,i){void 0===i&&(i=50),this.mo=0,this.po=1,this.yo=1,this.Gs=new Map,this.ko=new Map,this.No=t,this.xo=i;}return t.prototype.lo=function(t){var i=void 0===t.Co?new Date(1e3*t.So).getTime():new Date(Date.UTC(t.Co.year,t.Co.month-1,t.Co.day)).getTime(),n=this.Gs.get(i);if(void 0!==n)return n.To;if(this.mo===this.xo){var s=this.ko.get(this.yo);this.ko.delete(this.yo),this.Gs.delete(e(s)),this.yo++,this.mo--;}var h=this.No(t);return this.Gs.set(i,{To:h,Do:this.po}),this.ko.set(this.po,i),this.mo++,this.po++,h},t}(),Ji=function(){function t(t,i){r(t<=i,"right should be >= left"),this.Ao=t,this.Bo=i;}return t.prototype.In=function(){return this.Ao},t.prototype.jn=function(){return this.Bo},t.prototype.Lo=function(){return this.Bo-this.Ao+1},t.prototype.Uh=function(t){return this.Ao<=t&&t<=this.Bo},t.prototype.br=function(t){return this.Ao===t.In()&&this.Bo===t.jn()},t}();function Gi(t,i){return null===t||null===i?t===i:t.br(i)}var Qi,tn=function(){function t(){this.Eo=new Map,this.Gs=null;}return t.prototype.Fo=function(t,i){this.Oo(i),this.Gs=null;for(var n=i;n<t.length;++n){var s=t[n],h=this.Eo.get(s.Vo);void 0===h&&(h=[],this.Eo.set(s.Vo,h)),h.push({vs:n,rt:s.rt,Po:s.Vo});}},t.prototype.Wo=function(t,i){var n=Math.ceil(i/t);return null!==this.Gs&&this.Gs.zo===n||(this.Gs={au:this.Ro(n),zo:n}),this.Gs.au},t.prototype.Oo=function(t){if(0!==t){var i=[];this.Eo.forEach((function(n,s){t<=n[0].vs?i.push(s):n.splice(vt(n,t,(function(i){return i.vs<t})),1/0);}));for(var n=0,s=i;n<s.length;n++){var h=s[n];this.Eo.delete(h);}}else this.Eo.clear();},t.prototype.Ro=function(t){for(var i=[],n=0,s=Array.from(this.Eo.keys()).sort((function(t,i){return i-t}));n<s.length;n++){var h=s[n];if(this.Eo.get(h)){var r=i;i=[];for(var u=r.length,a=0,o=e(this.Eo.get(h)),l=o.length,f=1/0,c=-1/0,v=0;v<l;v++){for(var _=o[v],d=_.vs;a<u;){var w=r[a],M=w.vs;if(!(M<d)){f=M;break}a++,i.push(w),c=M,f=1/0;}f-d>=t&&d-c>=t&&(i.push(_),c=d);}for(;a<u;a++)i.push(r[a]);}}return i},t}(),nn=function(){function t(t){this.Io=t;}return t.prototype.jo=function(){return null===this.Io?null:new Ji(Math.floor(this.Io.In()),Math.ceil(this.Io.jn()))},t.prototype.qo=function(){return this.Io},t.Uo=function(){return new t(null)},t}();!function(t){t[t.Year=0]="Year",t[t.Month=1]="Month",t[t.DayOfMonth=2]="DayOfMonth",t[t.Time=3]="Time",t[t.TimeWithSeconds=4]="TimeWithSeconds";}(Qi||(Qi={}));var sn=function(){function t(t,i,n){this.hh=0,this.Ho=null,this.Yo=[],this.zu=null,this.Wu=null,this.$o=new tn,this.Ko=new Map,this.Xo=nn.Uo(),this.Zo=!0,this.Jo=new y,this.Go=new y,this.Qo=new y,this.tl=null,this.il=null,this.nl=[],this.zi=i,this.qu=n,this.sl=i.rightOffset,this.hl=i.barSpacing,this.pi=t,this.rl();}return t.prototype.W=function(){return this.zi},t.prototype.el=function(t){k(this.qu,t),this.ul(),this.rl();},t.prototype.Pr=function(t,i){var n;k(this.zi,t),this.zi.fixLeftEdge&&this.al(),this.zi.fixRightEdge&&this.ol(),void 0!==t.barSpacing&&this.pi.gn(t.barSpacing),void 0!==t.rightOffset&&this.pi.yn(t.rightOffset),void 0!==t.minBarSpacing&&this.pi.gn(null!==(n=t.barSpacing)&&void 0!==n?n:this.hl),this.ul(),this.rl(),this.Qo.m();},t.prototype.gi=function(t){var i;return (null===(i=this.Yo[t])||void 0===i?void 0:i.rt)||null},t.prototype.Ze=function(t,i){if(this.Yo.length<1)return null;if(t.So>this.Yo[this.Yo.length-1].rt.So)return i?this.Yo.length-1:null;var n=vt(this.Yo,t.So,(function(t,i){return t.rt.So<i}));return t.So<this.Yo[n].rt.So?i?n:null:n},t.prototype.wi=function(){return 0===this.hh||0===this.Yo.length||null===this.Ho},t.prototype.ss=function(){return this.ll(),this.Xo.jo()},t.prototype.fl=function(){return this.ll(),this.Xo.qo()},t.prototype.cl=function(){var t=this.ss();if(null===t)return null;var i={from:t.In(),to:t.jn()};return this.vl(i)},t.prototype.vl=function(t){var i=Math.round(t.from),n=Math.round(t.to),s=u(this._l()),h=u(this.dl());return {from:u(this.gi(Math.max(s,i))),to:u(this.gi(Math.min(h,n)))}},t.prototype.wl=function(t){return {from:u(this.Ze(t.from,!0)),to:u(this.Ze(t.to,!0))}},t.prototype.Ht=function(){return this.hh},t.prototype.Ra=function(t){if(isFinite(t)&&!(t<=0)&&this.hh!==t){if(this.zi.lockVisibleTimeRangeOnResize&&this.hh){var i=this.hl*t/this.hh;this.hl=i;}if(this.zi.fixLeftEdge){var n=this.ss();if(null!==n)if(n.In()<=0){var s=this.hh-t;this.sl-=Math.round(s/this.hl)+1;}}this.hh=t,this.Zo=!0,this.Ml(),this.bl();}},t.prototype.At=function(t){if(this.wi()||!x(t))return 0;var i=this.ml()+this.sl-t;return this.hh-(i+.5)*this.hl-1},t.prototype.es=function(t,i){for(var n=this.ml(),s=void 0===i?0:i.from,h=void 0===i?t.length:i.to,r=s;r<h;r++){var e=t[r].rt,u=n+this.sl-e,a=this.hh-(u+.5)*this.hl-1;t[r].tt=a;}},t.prototype.pl=function(t){return Math.ceil(this.gl(t))},t.prototype.yn=function(t){this.Zo=!0,this.sl=t,this.bl(),this.pi.yl(),this.pi.Wr();},t.prototype.ws=function(){return this.hl},t.prototype.gn=function(t){this.kl(t),this.bl(),this.pi.yl(),this.pi.Wr();},t.prototype.Nl=function(){return this.sl},t.prototype.au=function(){if(this.wi())return null;if(null!==this.il)return this.il;for(var t=this.hl,i=5*(this.pi.W().layout.fontSize+4),n=Math.round(i/t),s=u(this.ss()),h=Math.max(s.In(),s.In()-n),r=Math.max(s.jn(),s.jn()-n),e=this.$o.Wo(t,i),a=this._l()+n,o=this.dl()-n,l=this.xl(),f=this.zi.fixLeftEdge||l,c=this.zi.fixRightEdge||l,v=0,_=0,d=e;_<d.length;_++){var w=d[_];if(h<=w.vs&&w.vs<=r){var M=void 0;v<this.nl.length?((M=this.nl[v]).su=this.At(w.vs),M.yu=this.Cl(w.rt,w.Po),M.Po=w.Po):(M={Sl:!1,su:this.At(w.vs),yu:this.Cl(w.rt,w.Po),Po:w.Po},this.nl.push(M)),this.hl>i/2&&!l?M.Sl=!1:M.Sl=f&&w.vs<=a||c&&w.vs>=o,v++;}}return this.nl.length=v,this.il=this.nl,this.nl},t.prototype.Tl=function(){this.Zo=!0,this.gn(this.zi.barSpacing),this.yn(this.zi.rightOffset);},t.prototype.Dl=function(t){this.Zo=!0,this.Ho=t,this.bl(),this.al();},t.prototype.Al=function(t,i){var n=this.gl(t),s=this.ws(),h=s+i*(s/10);this.gn(h),this.zi.rightBarStaysOnScroll||this.yn(this.Nl()+(n-this.gl(t)));},t.prototype.da=function(t){this.zu&&this.pa(),null===this.Wu&&null===this.tl&&(this.wi()||(this.Wu=t,this.Bl()));},t.prototype.wa=function(t){if(null!==this.tl){var i=Nt(this.hh-t,0,this.hh),n=Nt(this.hh-u(this.Wu),0,this.hh);0!==i&&0!==n&&this.gn(this.tl.ws*i/n);}},t.prototype.Ma=function(){null!==this.Wu&&(this.Wu=null,this.Ll());},t.prototype.ba=function(t){null===this.zu&&null===this.tl&&(this.wi()||(this.zu=t,this.Bl()));},t.prototype.ma=function(t){if(null!==this.zu){var i=(this.zu-t)/this.ws();this.sl=u(this.tl).Nl+i,this.Zo=!0,this.bl();}},t.prototype.pa=function(){null!==this.zu&&(this.zu=null,this.Ll());},t.prototype.El=function(){this.Fl(this.zi.rightOffset);},t.prototype.Fl=function(t,i){var n=this;if(void 0===i&&(i=400),!isFinite(t))throw new RangeError("offset is required and must be finite number");if(!isFinite(i)||i<=0)throw new RangeError("animationDuration (optional) must be finite positive number");var s=this.sl,h=performance.now(),r=function(){var e=(performance.now()-h)/i,u=e>=1,a=u?t:s+(t-s)*e;n.yn(a),u||setTimeout(r,20);};r();},t.prototype.vt=function(t,i){this.Zo=!0,this.Yo=t,this.$o.Fo(t,i),this.bl();},t.prototype.Ol=function(){return this.Jo},t.prototype.Vl=function(){return this.Go},t.prototype.Pl=function(){return this.Qo},t.prototype.ml=function(){return this.Ho||0},t.prototype.Wl=function(t){var i=t.Lo();this.kl(this.hh/i),this.sl=t.jn()-this.ml(),this.bl(),this.Zo=!0,this.pi.yl(),this.pi.Wr();},t.prototype.zl=function(){var t=this._l(),i=this.dl();null!==t&&null!==i&&this.Wl(new Ji(t,i+this.zi.rightOffset));},t.prototype.Rl=function(t){var i=new Ji(t.from,t.to);this.Wl(i);},t.prototype.yi=function(t){return void 0!==this.qu.timeFormatter?this.qu.timeFormatter(t.Co||t.So):this.Il.lo(new Date(1e3*t.So))},t.prototype.xl=function(){var t=this.pi.W(),i=t.handleScroll,n=t.handleScale;return !(i.horzTouchDrag||i.mouseWheel||i.pressedMouseMove||i.vertTouchDrag||n.axisDoubleClickReset||n.axisPressedMouseMove.time||n.mouseWheel||n.pinch)},t.prototype._l=function(){return 0===this.Yo.length?null:0},t.prototype.dl=function(){return 0===this.Yo.length?null:this.Yo.length-1},t.prototype.jl=function(t){return (this.hh-1-t)/this.hl},t.prototype.gl=function(t){var i=this.jl(t),n=this.ml()+this.sl-i;return Math.round(1e6*n)/1e6},t.prototype.kl=function(t){var i=this.hl;this.hl=t,this.Ml(),i!==this.hl&&(this.Zo=!0,this.ql());},t.prototype.ll=function(){if(this.Zo)if(this.Zo=!1,this.wi())this.Ul(nn.Uo());else {var t=this.ml(),i=this.hh/this.hl,n=this.sl+t,s=new Ji(n-i+1,n);this.Ul(new nn(s));}},t.prototype.Ml=function(){var t=this.Hl();if(this.hl<t&&(this.hl=t,this.Zo=!0),0!==this.hh){var i=.5*this.hh;this.hl>i&&(this.hl=i,this.Zo=!0);}},t.prototype.Hl=function(){return this.zi.fixLeftEdge&&this.zi.fixRightEdge&&0!==this.Yo.length?this.hh/this.Yo.length:this.zi.minBarSpacing},t.prototype.bl=function(){var t=this.Yl();this.sl>t&&(this.sl=t,this.Zo=!0);var i=this.$l();null!==i&&this.sl<i&&(this.sl=i,this.Zo=!0);},t.prototype.$l=function(){var t=this._l(),i=this.Ho;return null===t||null===i?null:t-i-1+(this.zi.fixLeftEdge?this.hh/this.hl:Math.min(2,this.Yo.length))},t.prototype.Yl=function(){return this.zi.fixRightEdge?0:this.hh/this.hl-Math.min(2,this.Yo.length)},t.prototype.Bl=function(){this.tl={ws:this.ws(),Nl:this.Nl()};},t.prototype.Ll=function(){this.tl=null;},t.prototype.Cl=function(t,i){var n=this,s=this.Ko.get(i);return void 0===s&&(s=new Zi((function(t){return n.Kl(t,i)})),this.Ko.set(i,s)),s.lo(t)},t.prototype.Kl=function(t,i){var n,s=function(t,i,n){switch(t){case 0:case 10:return i?n?4:3:2;case 20:case 21:case 22:case 30:case 31:case 32:case 33:return i?3:2;case 50:return 2;case 60:return 1;case 70:return 0}}(i,this.zi.timeVisible,this.zi.secondsVisible);return void 0!==this.zi.tickMarkFormatter?this.zi.tickMarkFormatter(null!==(n=t.Co)&&void 0!==n?n:t.So,s,this.qu.locale):function(t,i,n){var s={};switch(i){case 0:s.year="numeric";break;case 1:s.month="short";break;case 2:s.day="numeric";break;case 3:s.hour12=!1,s.hour="2-digit",s.minute="2-digit";break;case 4:s.hour12=!1,s.hour="2-digit",s.minute="2-digit",s.second="2-digit";}var h=void 0===t.Co?new Date(1e3*t.So):new Date(Date.UTC(t.Co.year,t.Co.month-1,t.Co.day));return new Date(h.getUTCFullYear(),h.getUTCMonth(),h.getUTCDate(),h.getUTCHours(),h.getUTCMinutes(),h.getUTCSeconds(),h.getUTCMilliseconds()).toLocaleString(n,s)}(t,s,this.qu.locale)},t.prototype.Ul=function(t){var i=this.Xo;this.Xo=t,Gi(i.jo(),this.Xo.jo())||this.Jo.m(),Gi(i.qo(),this.Xo.qo())||this.Go.m(),this.ql();},t.prototype.ql=function(){this.il=null;},t.prototype.ul=function(){this.ql(),this.Ko.clear();},t.prototype.rl=function(){var t=this.qu.dateFormat;this.zi.timeVisible?this.Il=new Xi({co:t,vo:this.zi.secondsVisible?"%h:%m:%s":"%h:%m",_o:"   ",do:this.qu.locale}):this.Il=new Yi(t,this.qu.locale);},t.prototype.al=function(){if(this.zi.fixLeftEdge){var t=this._l();if(null!==t){var i=this.ss();if(null!==i){var n=i.In()-t;if(n<0){var s=this.sl-n-1;this.yn(s);}this.Ml();}}}},t.prototype.ol=function(){this.bl(),this.Ml();},t}();var hn,rn=function(t){function i(i){var n=t.call(this)||this;return n.Xl=new Map,n.Bt=i,n}return m(i,t),i.prototype.Y=function(t){},i.prototype.K=function(t){if(this.Bt.yt){t.save();for(var i=0,n=0,s=this.Bt.Zl;n<s.length;n++){if(0!==(a=s[n]).Gt.length){t.font=a.T;var h=this.Jl(t,a.Gt);h>this.Bt.Ht?a.Al=this.Bt.Ht/h:a.Al=1,i+=a.Gl*a.Al;}}var r=0;switch(this.Bt.Ql){case"top":r=0;break;case"center":r=Math.max((this.Bt.Yt-i)/2,0);break;case"bottom":r=Math.max(this.Bt.Yt-i,0);}t.fillStyle=this.Bt.A;for(var e=0,u=this.Bt.Zl;e<u.length;e++){var a=u[e];t.save();var o=0;switch(this.Bt.tf){case"left":t.textAlign="left",o=a.Gl/2;break;case"center":t.textAlign="center",o=this.Bt.Ht/2;break;case"right":t.textAlign="right",o=this.Bt.Ht-1-a.Gl/2;}t.translate(o,r),t.textBaseline="top",t.font=a.T,t.scale(a.Al,a.Al),t.fillText(a.Gt,0,a.if),t.restore(),r+=a.Gl*a.Al;}t.restore();}},i.prototype.Jl=function(t,i){var n=this.nf(t.font),s=n.get(i);return void 0===s&&(s=t.measureText(i).width,n.set(i,s)),s},i.prototype.nf=function(t){var i=this.Xl.get(t);return void 0===i&&(i=new Map,this.Xl.set(t,i)),i},i}(O),en=function(){function t(t){this.ft=!0,this.Wt={yt:!1,A:"",Yt:0,Ht:0,Zl:[],Ql:"center",tf:"center"},this.zt=new rn(this.Wt),this.Rt=t;}return t.prototype.vt=function(){this.ft=!0;},t.prototype.dt=function(t,i){return this.ft&&(this.wt(t,i),this.ft=!1),this.zt},t.prototype.wt=function(t,i){var n=this.Rt.W(),s=this.Wt;s.yt=n.visible,s.yt&&(s.A=n.color,s.Ht=i,s.Yt=t,s.tf=n.horzAlign,s.Ql=n.vertAlign,s.Zl=[{Gt:n.text,T:L(n.fontSize,n.fontFamily,n.fontStyle),Gl:1.2*n.fontSize,if:0,Al:0}]);},t}(),un=function(t){function i(i,n){var s=t.call(this)||this;return s.zi=n,s.Hi=new en(s),s}return m(i,t),i.prototype.nn=function(){return []},i.prototype.tn=function(){return [this.Hi]},i.prototype.W=function(){return this.zi},i.prototype.hn=function(){this.Hi.vt();},i}(Q);!function(t){t[t.OnTouchEnd=0]="OnTouchEnd",t[t.OnNextTap=1]="OnNextTap";}(hn||(hn={}));var an,on,ln,fn=function(){function t(t,i){this.sf=[],this.hf=[],this.hh=0,this.rf=null,this.ef=null,this.uf=new y,this.af=new y,this.lf=null,this.ff=t,this.zi=i,this.cf=new E(this),this.Da=new sn(this,i.timeScale,this.zi.localization),this.ct=new tt(this,i.crosshair),this.vf=new yi(i.crosshair),this._f=new un(this,i.watermark),this.df(),this.sf[0].za(2e3),this.wf=this.Mf(0),this.bf=this.Mf(1);}return t.prototype.Ce=function(){this.mf(new nt(3));},t.prototype.Wr=function(){this.mf(new nt(2));},t.prototype.We=function(){this.mf(new nt(1));},t.prototype.Se=function(t){var i=this.pf(t);this.mf(i);},t.prototype.gf=function(){return this.ef},t.prototype.yf=function(t){var i=this.ef;this.ef=t,null!==i&&this.Se(i.kf),null!==t&&this.Se(t.kf);},t.prototype.W=function(){return this.zi},t.prototype.Pr=function(t){k(this.zi,t),this.sf.forEach((function(i){return i.Oa(t)})),void 0!==t.timeScale&&this.Da.Pr(t.timeScale),void 0!==t.localization&&this.Da.el(t.localization),(t.leftPriceScale||t.rightPriceScale)&&this.uf.m(),this.wf=this.Mf(0),this.bf=this.Mf(1),this.Ce();},t.prototype.Nf=function(t,i){if("left"!==t)if("right"!==t){var n=this.xf(t);null!==n&&(n.Ct.Pr(i),this.uf.m());}else this.Pr({rightPriceScale:i});else this.Pr({leftPriceScale:i});},t.prototype.xf=function(t){for(var i=0,n=this.sf;i<n.length;i++){var s=n[i],h=s.Va(t);if(null!==h)return {It:s,Ct:h}}return null},t.prototype.bt=function(){return this.Da},t.prototype.Cf=function(){return this.sf},t.prototype.Sf=function(){return this._f},t.prototype.Tf=function(){return this.ct},t.prototype.Df=function(){return this.af},t.prototype.Af=function(t,i){t.ia(i),this.yl();},t.prototype.Ra=function(t){this.hh=t,this.Da.Ra(this.hh),this.sf.forEach((function(i){return i.Ra(t)})),this.yl();},t.prototype.df=function(t){var i=new qi(this.Da,this);void 0!==t?this.sf.splice(t,0,i):this.sf.push(i);var n=void 0===t?this.sf.length-1:t,s=new nt(3);return s.cn(n,{vn:0,_n:!0}),this.mf(s),i},t.prototype.Ka=function(t,i,n){t.Ka(i,n);},t.prototype.Xa=function(t,i,n){t.Xa(i,n),this.Te(),this.mf(this.Bf(t,2));},t.prototype.Za=function(t,i){t.Za(i),this.mf(this.Bf(t,2));},t.prototype.Ja=function(t,i,n){i.Xu()||t.Ja(i,n);},t.prototype.Ga=function(t,i,n){i.Xu()||(t.Ga(i,n),this.Te(),this.mf(this.Bf(t,2)));},t.prototype.Qa=function(t,i){i.Xu()||(t.Qa(i),this.mf(this.Bf(t,2)));},t.prototype.no=function(t,i){t.no(i),this.mf(this.Bf(t,2));},t.prototype.Lf=function(t){this.Da.da(t);},t.prototype.Ef=function(t,i){var n=this.bt();if(!n.wi()&&0!==i){var s=n.Ht();t=Math.max(1,Math.min(t,s)),n.Al(t,i),this.yl();}},t.prototype.Ff=function(t){this.Of(0),this.Vf(t),this.Pf();},t.prototype.Wf=function(t){this.Da.wa(t),this.yl();},t.prototype.zf=function(){this.Da.Ma(),this.Wr();},t.prototype.Of=function(t){this.rf=t,this.Da.ba(t);},t.prototype.Vf=function(t){var i=!1;return null!==this.rf&&Math.abs(t-this.rf)>20&&(this.rf=null,i=!0),this.Da.ma(t),this.yl(),i},t.prototype.Pf=function(){this.Da.pa(),this.Wr(),this.rf=null;},t.prototype._t=function(){return this.hf},t.prototype.Rf=function(t,i,n){this.ct.Yi(t,i);var s=NaN,h=this.Da.pl(t),r=this.Da.ss();null!==r&&(h=Math.min(Math.max(r.In(),h),r.jn()));var e=n.ji(),u=e.kt();null!==u&&(s=e.qi(i,u)),s=this.vf.Je(s,h,n),this.ct.Zi(h,s,n),this.We(),this.af.m(this.ct.Mt(),{x:t,y:i});},t.prototype.If=function(){this.Tf().Gi(),this.We(),this.af.m(null,null);},t.prototype.Te=function(){var t=this.ct.It();if(null!==t){var i=this.ct.Ki(),n=this.ct.Xi();this.Rf(i,n,t);}this.ct.hn();},t.prototype.jf=function(t,i,n){var s=this.Da.gi(0);void 0!==i&&void 0!==n&&this.Da.vt(i,n);var h=this.Da.gi(0),r=this.Da.ml(),e=this.Da.ss();if(null!==e&&null!==s&&null!==h){var u=e.Uh(r),a=s.So>h.So,o=null!==t&&t>r&&!a,l=u&&this.Da.W().shiftVisibleRangeOnNewBar;if(o&&!l){var f=t-r;this.Da.yn(this.Da.Nl()-f);}}this.Da.Dl(t);},t.prototype.Be=function(t){null!==t&&t.ho();},t.prototype.oh=function(t){var i=this.sf.find((function(i){return i.oa().includes(t)}));return void 0===i?null:i},t.prototype.yl=function(){this._f.hn(),this.sf.forEach((function(t){return t.ho()})),this.Te();},t.prototype.g=function(){this.sf.forEach((function(t){return t.g()})),this.sf.length=0,this.zi.localization.priceFormatter=void 0,this.zi.localization.timeFormatter=void 0;},t.prototype.qf=function(){return this.cf},t.prototype.dh=function(){return this.cf.W()},t.prototype.Pa=function(){return this.uf},t.prototype.Uf=function(t,i){var n=this.sf[0],s=this.Hf(i,t,n);return this.hf.push(s),1===this.hf.length?this.Ce():this.Wr(),s},t.prototype.Yf=function(t){var i=this.oh(t),n=this.hf.indexOf(t);r(-1!==n,"Series not found"),this.hf.splice(n,1),u(i).ca(t),t.g&&t.g();},t.prototype.xe=function(t,i){var n=u(this.oh(t));n.ca(t);var s=this.xf(i);if(null===s){var h=t.xi();n.la(t,i,h);}else {h=s.It===n?t.xi():void 0;s.It.la(t,i,h);}},t.prototype.zl=function(){var t=new nt(2);t.Mn(),this.mf(t);},t.prototype.$f=function(t){var i=new nt(2);i.mn(t),this.mf(i);},t.prototype.pn=function(){var t=new nt(2);t.pn(),this.mf(t);},t.prototype.gn=function(t){var i=new nt(2);i.gn(t),this.mf(i);},t.prototype.yn=function(t){var i=new nt(2);i.yn(t),this.mf(i);},t.prototype.Kf=function(){return this.zi.rightPriceScale.visible?"right":"left"},t.prototype.Xf=function(){return this.bf},t.prototype.Zf=function(){return this.wf},t.prototype.Dt=function(t){var i=this.bf,n=this.wf;if(i===n)return i;if(t=Math.max(0,Math.min(100,Math.round(100*t))),null===this.lf||this.lf.Pn!==n||this.lf.Wn!==i)this.lf={Pn:n,Wn:i,Jf:new Map};else {var s=this.lf.Jf.get(t);if(void 0!==s)return s}var h=function(t,i,n){var s=w(t),h=s[0],r=s[1],e=s[2],u=s[3],a=w(i),o=a[0],c=a[1],v=a[2],_=a[3],d=[l(h+n*(o-h)),l(r+n*(c-r)),l(e+n*(v-e)),f(u+n*(_-u))];return "rgba(".concat(d[0],", ").concat(d[1],", ").concat(d[2],", ").concat(d[3],")")}(n,i,t/100);return this.lf.Jf.set(t,h),h},t.prototype.Bf=function(t,i){var n=new nt(i);if(null!==t){var s=this.sf.indexOf(t);n.cn(s,{vn:i});}return n},t.prototype.pf=function(t,i){return void 0===i&&(i=2),this.Bf(this.oh(t),i)},t.prototype.mf=function(t){this.ff&&this.ff(t),this.sf.forEach((function(t){return t.eo().ou().vt()}));},t.prototype.Hf=function(t,i,n){var s=new gi(this,t,i),h=void 0!==t.priceScaleId?t.priceScaleId:this.Kf();return n.la(s,h),it(h)||s.Pr(t),s},t.prototype.Mf=function(t){var i=this.zi.layout;return "gradient"===i.background.type?0===t?i.background.topColor:i.background.bottomColor:i.background.color},t}();function cn(t){void 0!==t.borderColor&&(t.borderUpColor=t.borderColor,t.borderDownColor=t.borderColor),void 0!==t.wickColor&&(t.wickUpColor=t.wickColor,t.wickDownColor=t.wickColor);}function vn(t){return !N(t)&&!C(t)}function _n(t){return N(t)}!function(t){t[t.Disabled=0]="Disabled",t[t.Continuous=1]="Continuous",t[t.OnDataUpdate=2]="OnDataUpdate";}(an||(an={})),function(t){t[t.LastBar=0]="LastBar",t[t.LastVisible=1]="LastVisible";}(on||(on={})),function(t){t.Solid="solid",t.VerticalGradient="gradient";}(ln||(ln={}));var dn=function(){function t(t,i){this.Ft=t,this.Ot=i;}return t.prototype.br=function(t){return this.Ft===t.Ft&&this.Ot===t.Ot},t}();function wn(t){return t.ownerDocument&&t.ownerDocument.defaultView&&t.ownerDocument.defaultView.devicePixelRatio||1}function Mn(t){var i=u(t.getContext("2d"));return i.setTransform(1,0,0,1,0,0),i}function bn(t,i){var n=t.createElement("canvas"),s=wn(n);return n.style.width="".concat(i.Ft,"px"),n.style.height="".concat(i.Ot,"px"),n.width=i.Ft*s,n.height=i.Ot*s,n}function mn(i,n){var s=u(i.ownerDocument).createElement("canvas");i.appendChild(s);var h=bindToDevicePixelRatio(s,{allowDownsampling:!1});return h.resizeCanvas({width:n.Ft,height:n.Ot}),h}function pn(t,i){return t.Gf-i.Gf}function gn(t,i,n){var s=(t.Gf-i.Gf)/(t.rt-i.rt);return Math.sign(s)*Math.min(Math.abs(s),n)}var yn=function(){function t(t,i,n,s){this.Qf=null,this.tc=null,this.ic=null,this.nc=null,this.sc=null,this.hc=0,this.rc=0,this.ec=!1,this.uc=t,this.ac=i,this.oc=n,this.Cn=s;}return t.prototype.lc=function(t,i){if(null!==this.Qf){if(this.Qf.rt===i)return void(this.Qf.Gf=t);if(Math.abs(this.Qf.Gf-t)<this.Cn)return}this.nc=this.ic,this.ic=this.tc,this.tc=this.Qf,this.Qf={rt:i,Gf:t};},t.prototype.xh=function(t,i){if(null!==this.Qf&&null!==this.tc&&!(i-this.Qf.rt>50)){var n=0,s=gn(this.Qf,this.tc,this.ac),h=pn(this.Qf,this.tc),r=[s],e=[h];if(n+=h,null!==this.ic){var u=gn(this.tc,this.ic,this.ac);if(Math.sign(u)===Math.sign(s)){var a=pn(this.tc,this.ic);if(r.push(u),e.push(a),n+=a,null!==this.nc){var o=gn(this.ic,this.nc,this.ac);if(Math.sign(o)===Math.sign(s)){var l=pn(this.ic,this.nc);r.push(o),e.push(l),n+=l;}}}}for(var f,c,v,_=0,d=0;d<r.length;++d)_+=e[d]/n*r[d];if(!(Math.abs(_)<this.uc))this.sc={Gf:t,rt:i},this.rc=_,this.hc=(f=Math.abs(_),c=this.oc,v=Math.log(c),Math.log(1*v/-f)/v);}},t.prototype.fc=function(t){var i=u(this.sc),n=t-i.rt;return i.Gf+this.rc*(Math.pow(this.oc,n)-1)/Math.log(this.oc)},t.prototype.cc=function(t){return null===this.sc||this.vc(t)===this.hc},t.prototype._c=function(){return this.ec},t.prototype.dc=function(){this.ec=!0;},t.prototype.vc=function(t){var i=t-u(this.sc).rt;return Math.min(i,this.hc)},t}(),kn="undefined"!=typeof window;function Nn(){return !!kn&&window.navigator.userAgent.toLowerCase().indexOf("firefox")>-1}function xn(){return !!kn&&/iPhone|iPad|iPod/.test(window.navigator.platform)}function Cn(t){kn&&void 0!==window.chrome&&t.addEventListener("mousedown",(function(t){if(1===t.button)return t.preventDefault(),!1}));}var Sn=function(){function t(t,i,n){var s=this;this.wc=0,this.Mc=null,this.bc={tt:Number.NEGATIVE_INFINITY,it:Number.POSITIVE_INFINITY},this.mc=0,this.gc=null,this.yc={tt:Number.NEGATIVE_INFINITY,it:Number.POSITIVE_INFINITY},this.kc=null,this.Nc=!1,this.xc=null,this.Cc=null,this.Sc=!1,this.Tc=!1,this.Dc=!1,this.Ac=null,this.Bc=null,this.Lc=null,this.Ec=null,this.Fc=null,this.Oc=null,this.Vc=null,this.Pc=0,this.Wc=!1,this.zc=!1,this.Rc=!1,this.Ic=0,this.jc=null,this.qc=!xn(),this.Uc=function(t){s.Hc(t);},this.Yc=function(t){if(s.$c(t)){var i=s.Kc(t);if(++s.mc,s.gc&&s.mc>1)s.Zc(An(t),s.yc).Xc<30&&!s.Dc&&s.Jc(i,s.Qc.Gc),s.tv();}else {i=s.Kc(t);if(++s.wc,s.Mc&&s.wc>1)s.Zc(An(t),s.bc).Xc<5&&!s.Tc&&s.iv(i,s.Qc.nv),s.sv();}},this.hv=t,this.Qc=i,this.zi=n,this.rv();}return t.prototype.g=function(){null!==this.Ac&&(this.Ac(),this.Ac=null),null!==this.Bc&&(this.Bc(),this.Bc=null),null!==this.Ec&&(this.Ec(),this.Ec=null),null!==this.Fc&&(this.Fc(),this.Fc=null),null!==this.Oc&&(this.Oc(),this.Oc=null),null!==this.Lc&&(this.Lc(),this.Lc=null),this.ev(),this.sv();},t.prototype.uv=function(t){var i=this;this.Ec&&this.Ec();var n=this.av.bind(this);if(this.Ec=function(){i.hv.removeEventListener("mousemove",n);},this.hv.addEventListener("mousemove",n),!this.$c(t)){var s=this.Kc(t);this.iv(s,this.Qc.ov),this.qc=!0;}},t.prototype.sv=function(){null!==this.Mc&&clearTimeout(this.Mc),this.wc=0,this.Mc=null,this.bc={tt:Number.NEGATIVE_INFINITY,it:Number.POSITIVE_INFINITY};},t.prototype.tv=function(){null!==this.gc&&clearTimeout(this.gc),this.mc=0,this.gc=null,this.yc={tt:Number.NEGATIVE_INFINITY,it:Number.POSITIVE_INFINITY};},t.prototype.av=function(t){if(!this.Rc&&null===this.Cc&&!this.$c(t)){var i=this.Kc(t);this.iv(i,this.Qc.lv),this.qc=!0;}},t.prototype.fv=function(t){var i=Ln(t.changedTouches,u(this.jc));if(null!==i&&(this.Ic=Bn(t),null===this.Vc&&!this.zc)){this.Wc=!0;var n=this.Zc(An(i),u(this.Cc)),s=n.cv,h=n.vv,r=n.Xc;if(this.Sc||!(r<5)){if(!this.Sc){var e=.5*s,a=h>=e&&!this.zi._v(),o=e>h&&!this.zi.dv();a||o||(this.zc=!0),this.Sc=!0,this.Dc=!0,this.ev(),this.tv();}if(!this.zc){var l=this.Kc(t,i);this.Jc(l,this.Qc.wv),Dn(t);}}}},t.prototype.Mv=function(t){if(0===t.button&&(this.Zc(An(t),u(this.xc)).Xc>=5&&(this.Tc=!0,this.sv()),this.Tc)){var i=this.Kc(t);this.iv(i,this.Qc.bv);}},t.prototype.Zc=function(t,i){var n=Math.abs(i.tt-t.tt),s=Math.abs(i.it-t.it);return {cv:n,vv:s,Xc:n+s}},t.prototype.mv=function(t){var i=Ln(t.changedTouches,u(this.jc));if(null===i&&0===t.touches.length&&(i=t.changedTouches[0]),null!==i){this.jc=null,this.Ic=Bn(t),this.ev(),this.Cc=null,this.Oc&&(this.Oc(),this.Oc=null);var n=this.Kc(t,i);if(this.Jc(n,this.Qc.pv),++this.mc,this.gc&&this.mc>1)this.Zc(An(i),this.yc).Xc<30&&!this.Dc&&this.Jc(n,this.Qc.Gc),this.tv();else this.Dc||(this.Jc(n,this.Qc.gv),this.Qc.gv&&Dn(t));0===this.mc&&Dn(t),0===t.touches.length&&this.Nc&&(this.Nc=!1,Dn(t));}},t.prototype.Hc=function(t){if(0===t.button){var i=this.Kc(t);if(this.xc=null,this.Rc=!1,this.Fc&&(this.Fc(),this.Fc=null),Nn())this.hv.ownerDocument.documentElement.removeEventListener("mouseleave",this.Uc);if(!this.$c(t))if(this.iv(i,this.Qc.yv),++this.wc,this.Mc&&this.wc>1)this.Zc(An(t),this.bc).Xc<5&&!this.Tc&&this.iv(i,this.Qc.nv),this.sv();else this.Tc||this.iv(i,this.Qc.kv);}},t.prototype.ev=function(){null!==this.kc&&(clearTimeout(this.kc),this.kc=null);},t.prototype.Nv=function(t){if(null===this.jc){var i=t.changedTouches[0];this.jc=i.identifier,this.Ic=Bn(t);var n=this.hv.ownerDocument.documentElement;this.Dc=!1,this.Sc=!1,this.zc=!1,this.Cc=An(i),this.Oc&&(this.Oc(),this.Oc=null);var s=this.fv.bind(this),h=this.mv.bind(this);this.Oc=function(){n.removeEventListener("touchmove",s),n.removeEventListener("touchend",h);},n.addEventListener("touchmove",s,{passive:!1}),n.addEventListener("touchend",h,{passive:!1}),this.ev(),this.kc=setTimeout(this.xv.bind(this,t),240);var r=this.Kc(t,i);this.Jc(r,this.Qc.Cv),this.gc||(this.mc=0,this.gc=setTimeout(this.tv.bind(this),500),this.yc=An(i));}},t.prototype.Sv=function(t){if(0===t.button){var i=this.hv.ownerDocument.documentElement;Nn()&&i.addEventListener("mouseleave",this.Uc),this.Tc=!1,this.xc=An(t),this.Fc&&(this.Fc(),this.Fc=null);var n=this.Mv.bind(this),s=this.Hc.bind(this);if(this.Fc=function(){i.removeEventListener("mousemove",n),i.removeEventListener("mouseup",s);},i.addEventListener("mousemove",n),i.addEventListener("mouseup",s),this.Rc=!0,!this.$c(t)){var h=this.Kc(t);this.iv(h,this.Qc.Tv),this.Mc||(this.wc=0,this.Mc=setTimeout(this.sv.bind(this),500),this.bc=An(t));}}},t.prototype.rv=function(){var t=this;this.hv.addEventListener("mouseenter",this.uv.bind(this)),this.hv.addEventListener("touchcancel",this.ev.bind(this));var i=this.hv.ownerDocument,n=function(i){t.Qc.Dv&&(i.target&&t.hv.contains(i.target)||t.Qc.Dv());};this.Bc=function(){i.removeEventListener("touchstart",n);},this.Ac=function(){i.removeEventListener("mousedown",n);},i.addEventListener("mousedown",n),i.addEventListener("touchstart",n,{passive:!0}),xn()&&(this.Lc=function(){t.hv.removeEventListener("dblclick",t.Yc);},this.hv.addEventListener("dblclick",this.Yc)),this.hv.addEventListener("mouseleave",this.Av.bind(this)),this.hv.addEventListener("touchstart",this.Nv.bind(this),{passive:!0}),Cn(this.hv),this.hv.addEventListener("mousedown",this.Sv.bind(this)),this.Bv(),this.hv.addEventListener("touchmove",(function(){}),{passive:!1});},t.prototype.Bv=function(){var t=this;void 0===this.Qc.Lv&&void 0===this.Qc.Ev&&void 0===this.Qc.Fv||(this.hv.addEventListener("touchstart",(function(i){return t.Ov(i.touches)}),{passive:!0}),this.hv.addEventListener("touchmove",(function(i){if(2===i.touches.length&&null!==t.Vc&&void 0!==t.Qc.Ev){var n=Tn(i.touches[0],i.touches[1])/t.Pc;t.Qc.Ev(t.Vc,n),Dn(i);}}),{passive:!1}),this.hv.addEventListener("touchend",(function(i){t.Ov(i.touches);})));},t.prototype.Ov=function(t){1===t.length&&(this.Wc=!1),2!==t.length||this.Wc||this.Nc?this.Vv():this.Pv(t);},t.prototype.Pv=function(t){var i=this.hv.getBoundingClientRect()||{left:0,top:0};this.Vc={tt:(t[0].clientX-i.left+(t[1].clientX-i.left))/2,it:(t[0].clientY-i.top+(t[1].clientY-i.top))/2},this.Pc=Tn(t[0],t[1]),void 0!==this.Qc.Lv&&this.Qc.Lv(),this.ev();},t.prototype.Vv=function(){null!==this.Vc&&(this.Vc=null,void 0!==this.Qc.Fv&&this.Qc.Fv());},t.prototype.Av=function(t){if(this.Ec&&this.Ec(),!this.$c(t)&&this.qc){var i=this.Kc(t);this.iv(i,this.Qc.Wv),this.qc=!xn();}},t.prototype.xv=function(t){var i=Ln(t.touches,u(this.jc));if(null!==i){var n=this.Kc(t,i);this.Jc(n,this.Qc.zv),this.Dc=!0,this.Nc=!0;}},t.prototype.$c=function(t){return t.sourceCapabilities&&void 0!==t.sourceCapabilities.firesTouchEvents?t.sourceCapabilities.firesTouchEvents:Bn(t)<this.Ic+500},t.prototype.Jc=function(t,i){i&&i.call(this.Qc,t);},t.prototype.iv=function(t,i){i&&i.call(this.Qc,t);},t.prototype.Kc=function(t,i){var n=i||t,s=this.hv.getBoundingClientRect()||{left:0,top:0};return {Rv:n.clientX,Iv:n.clientY,jv:n.pageX,qv:n.pageY,Uv:n.screenX,Hv:n.screenY,Yv:n.clientX-s.left,$v:n.clientY-s.top,Kv:t.ctrlKey,Xv:t.altKey,Zv:t.shiftKey,Jv:t.metaKey,Gv:!t.type.startsWith("mouse")&&"contextmenu"!==t.type&&"click"!==t.type,Qv:t.type,t_:n.target,i_:t.view,n_:function(){"touchstart"!==t.type&&Dn(t);}}},t}();function Tn(t,i){var n=t.clientX-i.clientX,s=t.clientY-i.clientY;return Math.sqrt(n*n+s*s)}function Dn(t){t.cancelable&&t.preventDefault();}function An(t){return {tt:t.pageX,it:t.pageY}}function Bn(t){return t.timeStamp||performance.now()}function Ln(t,i){for(var n=0;n<t.length;++n)if(t[n].identifier===i)return t[n];return null}var En=function(){function t(t,i,n,s){this.rh=new Rt(200),this.R=0,this.s_="",this.Yh="",this.th=[],this.h_=new Map,this.R=t,this.s_=i,this.Yh=L(t,n,s);}return t.prototype.g=function(){this.rh.ih(),this.th=[],this.h_.clear();},t.prototype.r_=function(t,i,n,s,h){var r=this.e_(t,i);if("left"!==h){var e=wn(t.canvas);n-=Math.floor(r.u_*e);}s-=Math.floor(r.Yt/2),t.drawImage(r.a_,n,s,r.Ht,r.Yt);},t.prototype.e_=function(t,i){var n,s=this;if(this.h_.has(i))n=e(this.h_.get(i));else {if(this.th.length>=200){var h=e(this.th.shift());this.h_.delete(h);}var r=wn(t.canvas),u=Math.ceil(this.R/4.5),a=Math.round(this.R/10),o=Math.ceil(this.rh.Qt(t,i)),l=St(Math.round(o+2*u)),f=St(this.R+2*u),c=bn(document,new dn(l,f));n={Gt:i,u_:Math.round(Math.max(1,o)),Ht:Math.ceil(l*r),Yt:Math.ceil(f*r),a_:c},0!==o&&(this.th.push(n.Gt),this.h_.set(n.Gt,n)),q(t=Mn(n.a_),r,(function(){t.font=s.Yh,t.fillStyle=s.s_,t.fillText(i,0,f-u-a);}));}return n},t}(),Fn=function(){function t(t,i,n,s){var h=this;this._i=null,this.o_=null,this.l_=!1,this.f_=new Rt(50),this.c_=new En(11,"#000"),this.s_=null,this.Yh=null,this.v_=0,this.__=!1,this.d_=function(){h.w_(h.cf.W()),h.__||h.Di.M_().jt().Wr();},this.b_=function(){h.__||h.Di.M_().jt().Wr();},this.Di=t,this.zi=i,this.cf=n,this.m_="left"===s,this.p_=document.createElement("div"),this.p_.style.height="100%",this.p_.style.overflow="hidden",this.p_.style.width="25px",this.p_.style.left="0",this.p_.style.position="relative",this.g_=mn(this.p_,new dn(16,16)),this.g_.subscribeCanvasConfigured(this.d_);var r=this.g_.canvas;r.style.position="absolute",r.style.zIndex="1",r.style.left="0",r.style.top="0",this.y_=mn(this.p_,new dn(16,16)),this.y_.subscribeCanvasConfigured(this.b_);var e=this.y_.canvas;e.style.position="absolute",e.style.zIndex="2",e.style.left="0",e.style.top="0";var u={Tv:this.k_.bind(this),Cv:this.k_.bind(this),bv:this.N_.bind(this),wv:this.N_.bind(this),Dv:this.x_.bind(this),yv:this.C_.bind(this),pv:this.C_.bind(this),nv:this.S_.bind(this),Gc:this.S_.bind(this),ov:this.T_.bind(this),Wv:this.D_.bind(this)};this.A_=new Sn(this.y_.canvas,u,{_v:function(){return !1},dv:function(){return !0}});}return t.prototype.g=function(){this.A_.g(),this.y_.unsubscribeCanvasConfigured(this.b_),this.y_.destroy(),this.g_.unsubscribeCanvasConfigured(this.d_),this.g_.destroy(),null!==this._i&&this._i._a().M(this),this._i=null,this.c_.g();},t.prototype.B_=function(){return this.p_},t.prototype.ht=function(){return u(this._i).W().borderColor},t.prototype.L_=function(){return this.zi.textColor},t.prototype.S=function(){return this.zi.fontSize},t.prototype.E_=function(){return L(this.S(),this.zi.fontFamily)},t.prototype.F_=function(){var t=this.cf.W(),i=this.s_!==t.A,n=this.Yh!==t.T;return (i||n)&&(this.w_(t),this.s_=t.A),n&&(this.f_.ih(),this.Yh=t.T),t},t.prototype.O_=function(){if(null===this._i)return 0;var t=0,i=this.F_(),n=Mn(this.g_.canvas),s=this._i.au();n.font=this.E_(),s.length>0&&(t=Math.max(this.f_.Qt(n,s[0].yu),this.f_.Qt(n,s[s.length-1].yu)));for(var h=this.V_(),r=h.length;r--;){var e=this.f_.Qt(n,h[r].Gt());e>t&&(t=e);}var u=this._i.kt();if(null!==u&&null!==this.o_){var a=this._i.qi(1,u),o=this._i.qi(this.o_.Ot-2,u);t=Math.max(t,this.f_.Qt(n,this._i.Mi(Math.floor(Math.min(a,o))+.11111111111111,u)),this.f_.Qt(n,this._i.Mi(Math.ceil(Math.max(a,o))-.11111111111111,u)));}var l=t||34,f=Math.ceil(i.N+i.C+i.L+i.F+l);return f+=f%2},t.prototype.P_=function(t){if(t.Ft<0||t.Ot<0)throw new Error("Try to set invalid size to PriceAxisWidget "+JSON.stringify(t));null!==this.o_&&this.o_.br(t)||(this.o_=t,this.__=!0,this.g_.resizeCanvas({width:t.Ft,height:t.Ot}),this.y_.resizeCanvas({width:t.Ft,height:t.Ot}),this.__=!1,this.p_.style.width=t.Ft+"px",this.p_.style.height=t.Ot+"px",this.p_.style.minWidth=t.Ft+"px");},t.prototype.W_=function(){return u(this.o_).Ft},t.prototype.Si=function(t){this._i!==t&&(null!==this._i&&this._i._a().M(this),this._i=t,t._a().u(this.Eu.bind(this),this));},t.prototype.Ct=function(){return this._i},t.prototype.ih=function(){var t=this.Di.z_();this.Di.M_().jt().no(t,u(this.Ct()));},t.prototype.R_=function(t){if(null!==this.o_){if(1!==t){var i=Mn(this.g_.canvas);this.I_(),this.j_(i,this.g_.pixelRatio),this.Rs(i,this.g_.pixelRatio),this.q_(i,this.g_.pixelRatio),this.U_(i,this.g_.pixelRatio);}var n=Mn(this.y_.canvas),s=this.o_.Ft,h=this.o_.Ot;q(n,this.y_.pixelRatio,(function(){n.clearRect(0,0,s,h);})),this.H_(n,this.y_.pixelRatio);}},t.prototype.Y_=function(){return this.g_.canvas},t.prototype.vt=function(){var t;null===(t=this._i)||void 0===t||t.au();},t.prototype.k_=function(t){if(null!==this._i&&!this._i.wi()&&this.Di.M_().W().handleScale.axisPressedMouseMove.price){var i=this.Di.M_().jt(),n=this.Di.z_();this.l_=!0,i.Ka(n,this._i,t.$v);}},t.prototype.N_=function(t){if(null!==this._i&&this.Di.M_().W().handleScale.axisPressedMouseMove.price){var i=this.Di.M_().jt(),n=this.Di.z_(),s=this._i;i.Xa(n,s,t.$v);}},t.prototype.x_=function(){if(null!==this._i&&this.Di.M_().W().handleScale.axisPressedMouseMove.price){var t=this.Di.M_().jt(),i=this.Di.z_(),n=this._i;this.l_&&(this.l_=!1,t.Za(i,n));}},t.prototype.C_=function(t){if(null!==this._i&&this.Di.M_().W().handleScale.axisPressedMouseMove.price){var i=this.Di.M_().jt(),n=this.Di.z_();this.l_=!1,i.Za(n,this._i);}},t.prototype.S_=function(t){this.Di.M_().W().handleScale.axisDoubleClickReset&&this.ih();},t.prototype.T_=function(t){null!==this._i&&(!this.Di.M_().jt().W().handleScale.axisPressedMouseMove.price||this._i.vr()||this._i.Zu()||this.K_(1));},t.prototype.D_=function(t){this.K_(0);},t.prototype.V_=function(){var t=this,i=[],n=null===this._i?void 0:this._i;return function(s){for(var h=0;h<s.length;++h)for(var r=s[h].nn(t.Di.z_(),n),e=0;e<r.length;e++)i.push(r[e]);}(this.Di.z_().oa()),i},t.prototype.j_=function(t,i){var n=this;if(null!==this.o_){var s=this.o_.Ft,h=this.o_.Ot;q(t,i,(function(){var i=n.Di.z_().jt(),r=i.Zf(),e=i.Xf();r===e?U(t,0,0,s,h,r):H(t,0,0,s,h,r,e);}));}},t.prototype.Rs=function(t,i){if(null!==this.o_&&null!==this._i&&this._i.W().borderVisible){t.save(),t.fillStyle=this.ht();var n,s=Math.max(1,Math.floor(this.F_().N*i));n=this.m_?Math.floor(this.o_.Ft*i)-s:0,t.fillRect(n,0,s,Math.ceil(this.o_.Ot*i)),t.restore();}},t.prototype.q_=function(t,i){if(null!==this.o_&&null!==this._i){var n=this._i.au();t.save(),t.strokeStyle=this.ht(),t.font=this.E_(),t.fillStyle=this.ht();var s=this.F_(),h=this._i.W().borderVisible&&this._i.W().drawTicks,r=this.m_?Math.floor((this.o_.Ft-s.C)*i-s.N*i):Math.floor(s.N*i),e=this.m_?Math.round(r-s.L*i):Math.round(r+s.C*i+s.L*i),u=this.m_?"right":"left",a=Math.max(1,Math.floor(i)),o=Math.floor(.5*i);if(h){var l=Math.round(s.C*i);t.beginPath();for(var f=0,c=n;f<c.length;f++){var v=c[f];t.rect(r,Math.round(v.su*i)-o,l,a);}t.fill();}t.fillStyle=this.L_();for(var _=0,d=n;_<d.length;_++){v=d[_];this.c_.r_(t,v.yu,e,Math.round(v.su*i),u);}t.restore();}},t.prototype.I_=function(){if(null!==this.o_&&null!==this._i){var t=this.o_.Ot/2,i=[],n=this._i.oa().slice(),s=this.Di.z_(),h=this.F_();this._i===s.fh()&&this.Di.z_().oa().forEach((function(t){s.lh(t)&&n.push(t);}));var r=this._i.Ge()[0],e=this._i;n.forEach((function(n){var h=n.nn(s,e);h.forEach((function(t){t.oi(null),t.li()&&i.push(t);})),r===n&&h.length>0&&(t=h[0].ti());}));var u=i.filter((function(i){return i.ti()<=t})),a=i.filter((function(i){return i.ti()>t}));if(u.sort((function(t,i){return i.ti()-t.ti()})),u.length&&a.length&&a.push(u[0]),a.sort((function(t,i){return t.ti()-i.ti()})),i.forEach((function(t){return t.oi(t.ti())})),this._i.W().alignLabels){for(var o=1;o<u.length;o++){var l=u[o],f=(v=u[o-1]).Yt(h,!1);l.ti()>(_=v.ai())-f&&l.oi(_-f);}for(var c=1;c<a.length;c++){var v,_;l=a[c],f=(v=a[c-1]).Yt(h,!0);l.ti()<(_=v.ai())+f&&l.oi(_+f);}}}},t.prototype.U_=function(t,i){var n=this;if(null!==this.o_){t.save();var s=this.o_,h=this.V_(),r=this.F_(),e=this.m_?"right":"left";h.forEach((function(h){if(h.fi()){var a=h.dt(u(n._i));t.save(),a.H(t,r,n.f_,s.Ft,e,i),t.restore();}})),t.restore();}},t.prototype.H_=function(t,i){var n=this;if(null!==this.o_&&null!==this._i){t.save();var s=this.o_,h=this.Di.M_().jt(),r=[],e=this.Di.z_(),a=h.Tf().nn(e,this._i);a.length&&r.push(a);var o=this.F_(),l=this.m_?"right":"left";r.forEach((function(h){h.forEach((function(h){t.save(),h.dt(u(n._i)).H(t,o,n.f_,s.Ft,l,i),t.restore();}));})),t.restore();}},t.prototype.K_=function(t){this.p_.style.cursor=1===t?"ns-resize":"default";},t.prototype.Eu=function(){var t=this.O_();this.v_<t&&this.Di.M_().jt().Ce(),this.v_=t;},t.prototype.w_=function(t){this.c_.g(),this.c_=new En(t.S,t.A,t.D);},t}();function On(t,i,n,s,h){t.$&&t.$(i,n,s,h);}function Vn(t,i,n,s,h){t.H(i,n,s,h);}function Pn(t,i){return t.tn(i)}function Wn(t,i){return void 0!==t.Pe?t.Pe(i):[]}var zn=function(){function t(t,i){var n=this;this.o_=new dn(0,0),this.X_=null,this.Z_=null,this.J_=null,this.G_=!1,this.Q_=new y,this.td=0,this.nd=!1,this.sd=null,this.hd=!1,this.rd=null,this.ed=null,this.__=!1,this.d_=function(){n.__||null===n.ud||n.pi().Wr();},this.b_=function(){n.__||null===n.ud||n.pi().Wr();},this.ad=t,this.ud=i,this.ud.ro().u(this.od.bind(this),this,!0),this.ld=document.createElement("td"),this.ld.style.padding="0",this.ld.style.position="relative";var s=document.createElement("div");s.style.width="100%",s.style.height="100%",s.style.position="relative",s.style.overflow="hidden",this.fd=document.createElement("td"),this.fd.style.padding="0",this.vd=document.createElement("td"),this.vd.style.padding="0",this.ld.appendChild(s),this.g_=mn(s,new dn(16,16)),this.g_.subscribeCanvasConfigured(this.d_);var h=this.g_.canvas;h.style.position="absolute",h.style.zIndex="1",h.style.left="0",h.style.top="0",this.y_=mn(s,new dn(16,16)),this.y_.subscribeCanvasConfigured(this.b_);var r=this.y_.canvas;r.style.position="absolute",r.style.zIndex="2",r.style.left="0",r.style.top="0",this._d=document.createElement("tr"),this._d.appendChild(this.fd),this._d.appendChild(this.ld),this._d.appendChild(this.vd),this.dd(),this.A_=new Sn(this.y_.canvas,this,{_v:function(){return null===n.sd&&!n.ad.W().handleScroll.vertTouchDrag},dv:function(){return null===n.sd&&!n.ad.W().handleScroll.horzTouchDrag}});}return t.prototype.g=function(){null!==this.X_&&this.X_.g(),null!==this.Z_&&this.Z_.g(),this.y_.unsubscribeCanvasConfigured(this.b_),this.y_.destroy(),this.g_.unsubscribeCanvasConfigured(this.d_),this.g_.destroy(),null!==this.ud&&this.ud.ro().M(this),this.A_.g();},t.prototype.z_=function(){return u(this.ud)},t.prototype.wd=function(i){null!==this.ud&&this.ud.ro().M(this),this.ud=i,null!==this.ud&&this.ud.ro().u(t.prototype.od.bind(this),this,!0),this.dd();},t.prototype.M_=function(){return this.ad},t.prototype.B_=function(){return this._d},t.prototype.dd=function(){if(null!==this.ud&&(this.Md(),0!==this.pi()._t().length)){if(null!==this.X_){var t=this.ud.Ya();this.X_.Si(u(t));}if(null!==this.Z_){var i=this.ud.$a();this.Z_.Si(u(i));}}},t.prototype.bd=function(){null!==this.X_&&this.X_.vt(),null!==this.Z_&&this.Z_.vt();},t.prototype.Wa=function(){return null!==this.ud?this.ud.Wa():0},t.prototype.za=function(t){this.ud&&this.ud.za(t);},t.prototype.ov=function(t){if(this.ud){this.md();var i=t.Yv,n=t.$v;this.pd(i,n);}},t.prototype.Tv=function(t){this.md(),this.gd(),this.pd(t.Yv,t.$v);},t.prototype.lv=function(t){if(this.ud){this.md();var i=t.Yv,n=t.$v;this.pd(i,n);var s=this.$h(i,n);this.pi().yf(s&&{kf:s.kf,yd:s.yd});}},t.prototype.kv=function(t){if(null!==this.ud){this.md();var i=t.Yv,n=t.$v;if(this.Q_.p()){var s=this.pi().Tf().Mt();this.Q_.m(s,{x:i,y:n});}}},t.prototype.bv=function(t){this.md(),this.kd(t),this.pd(t.Yv,t.$v);},t.prototype.yv=function(t){null!==this.ud&&(this.md(),this.nd=!1,this.Nd(t));},t.prototype.zv=function(t){if(this.nd=!0,null===this.sd){var i={x:t.Yv,y:t.$v};this.xd(i,i);}},t.prototype.Wv=function(t){null!==this.ud&&(this.md(),this.ud.jt().yf(null),this.Cd());},t.prototype.Sd=function(){return this.Q_},t.prototype.Lv=function(){this.td=1,this.Td();},t.prototype.Ev=function(t,i){if(this.ad.W().handleScale.pinch){var n=5*(i-this.td);this.td=i,this.pi().Ef(t.tt,n);}},t.prototype.Cv=function(t){if(this.nd=!1,this.hd=null!==this.sd,this.gd(),null!==this.sd){var i=this.pi().Tf();this.rd={x:i.$t(),y:i.Kt()},this.sd={x:t.Yv,y:t.$v};}},t.prototype.wv=function(t){if(null!==this.ud){var i=t.Yv,n=t.$v;if(null===this.sd)this.kd(t);else {this.hd=!1;var s=u(this.rd),h=s.x+(i-this.sd.x),r=s.y+(n-this.sd.y);this.pd(h,r);}}},t.prototype.pv=function(t){0===this.M_().W().trackingMode.exitMode&&(this.hd=!0),this.Dd(),this.Nd(t);},t.prototype.$h=function(t,i){var n=this.ud;if(null===n)return null;for(var s=0,h=n.oa();s<h.length;s++){var r=h[s],e=this.Ad(r.tn(n),t,i);if(null!==e)return {kf:r,i_:e.i_,yd:e.yd}}return null},t.prototype.Bd=function(t,i){u("left"===i?this.X_:this.Z_).P_(new dn(t,this.o_.Ot));},t.prototype.Ld=function(){return this.o_},t.prototype.P_=function(t){if(t.Ft<0||t.Ot<0)throw new Error("Try to set invalid size to PaneWidget "+JSON.stringify(t));this.o_.br(t)||(this.o_=t,this.__=!0,this.g_.resizeCanvas({width:t.Ft,height:t.Ot}),this.y_.resizeCanvas({width:t.Ft,height:t.Ot}),this.__=!1,this.ld.style.width=t.Ft+"px",this.ld.style.height=t.Ot+"px");},t.prototype.Ed=function(){var t=u(this.ud);t.Ha(t.Ya()),t.Ha(t.$a());for(var i=0,n=t.Ge();i<n.length;i++){var s=n[i];if(t.lh(s)){var h=s.Ct();null!==h&&t.Ha(h),s.hn();}}},t.prototype.Y_=function(){return this.g_.canvas},t.prototype.R_=function(t){if(0!==t&&null!==this.ud){if(t>1&&this.Ed(),null!==this.X_&&this.X_.R_(t),null!==this.Z_&&this.Z_.R_(t),1!==t){var i=Mn(this.g_.canvas);i.save(),this.j_(i,this.g_.pixelRatio),this.ud&&(this.Fd(i,this.g_.pixelRatio),this.Od(i,this.g_.pixelRatio),this.Vd(i,this.g_.pixelRatio,Pn)),i.restore();}var n=Mn(this.y_.canvas);n.clearRect(0,0,Math.ceil(this.o_.Ft*this.y_.pixelRatio),Math.ceil(this.o_.Ot*this.y_.pixelRatio)),this.Vd(n,this.g_.pixelRatio,Wn),this.Pd(n,this.y_.pixelRatio);}},t.prototype.Wd=function(){return this.X_},t.prototype.zd=function(){return this.Z_},t.prototype.od=function(){null!==this.ud&&this.ud.ro().M(this),this.ud=null;},t.prototype.j_=function(t,i){var n=this;q(t,i,(function(){var i=n.pi(),s=i.Zf(),h=i.Xf();s===h?U(t,0,0,n.o_.Ft,n.o_.Ot,h):H(t,0,0,n.o_.Ft,n.o_.Ot,s,h);}));},t.prototype.Fd=function(t,i){var n=u(this.ud),s=n.eo().ou().dt(n.Yt(),n.Ht());null!==s&&(t.save(),s.H(t,i,!1),t.restore());},t.prototype.Od=function(t,i){var n=this.pi().Sf();this.Rd(t,i,Pn,On,n),this.Rd(t,i,Pn,Vn,n);},t.prototype.Pd=function(t,i){this.Rd(t,i,Pn,Vn,this.pi().Tf());},t.prototype.Vd=function(t,i,n){for(var s=u(this.ud).oa(),h=0,r=s;h<r.length;h++){var e=r[h];this.Rd(t,i,n,On,e);}for(var a=0,o=s;a<o.length;a++){e=o[a];this.Rd(t,i,n,Vn,e);}},t.prototype.Rd=function(t,i,n,s,h){for(var r=u(this.ud),e=n(h,r),a=r.Yt(),o=r.Ht(),l=r.jt().gf(),f=null!==l&&l.kf===h,c=null!==l&&f&&void 0!==l.yd?l.yd.Kh:void 0,v=0,_=e;v<_.length;v++){var d=_[v].dt(a,o);null!==d&&(t.save(),s(d,t,i,f,c),t.restore());}},t.prototype.Ad=function(t,i,n){for(var s=0,h=t;s<h.length;s++){var r=h[s],e=r.dt(this.o_.Ot,this.o_.Ft);if(null!==e&&e.$h){var u=e.$h(i,n);if(null!==u)return {i_:r,yd:u}}}return null},t.prototype.Md=function(){if(null!==this.ud){var t=this.ad,i=this.ud.Ya().W().visible,n=this.ud.$a().W().visible;i||null===this.X_||(this.fd.removeChild(this.X_.B_()),this.X_.g(),this.X_=null),n||null===this.Z_||(this.vd.removeChild(this.Z_.B_()),this.Z_.g(),this.Z_=null);var s=t.jt().qf();i&&null===this.X_&&(this.X_=new Fn(this,t.W().layout,s,"left"),this.fd.appendChild(this.X_.B_())),n&&null===this.Z_&&(this.Z_=new Fn(this,t.W().layout,s,"right"),this.vd.appendChild(this.Z_.B_()));}},t.prototype.Id=function(t){return t.Gv&&this.nd||null!==this.sd},t.prototype.jd=function(t){return Math.max(0,Math.min(t,this.o_.Ft-1))},t.prototype.qd=function(t){return Math.max(0,Math.min(t,this.o_.Ot-1))},t.prototype.pd=function(t,i){this.pi().Rf(this.jd(t),this.qd(i),u(this.ud));},t.prototype.Cd=function(){this.pi().If();},t.prototype.Dd=function(){this.hd&&(this.sd=null,this.Cd());},t.prototype.xd=function(t,i){this.sd=t,this.hd=!1,this.pd(i.x,i.y);var n=this.pi().Tf();this.rd={x:n.$t(),y:n.Kt()};},t.prototype.pi=function(){return this.ad.jt()},t.prototype.Ud=function(){var t=this.pi(),i=this.z_(),n=i.ji();t.Qa(i,n),t.Pf(),this.J_=null,this.G_=!1;},t.prototype.Nd=function(t){var i=this;if(this.G_){var n=performance.now();if(null!==this.ed&&this.ed.xh(t.Yv,n),null===this.ed||this.ed.cc(n))this.Ud();else {var s=this.pi(),h=s.bt(),r=this.ed,e=function(){if(!r._c()){var t=performance.now(),n=r.cc(t);if(!r._c()){var u=h.Nl();s.Vf(r.fc(t)),u===h.Nl()&&(n=!0,i.ed=null);}n?i.Ud():requestAnimationFrame(e);}};requestAnimationFrame(e);}}},t.prototype.md=function(){this.sd=null;},t.prototype.gd=function(){if(this.ud){if(this.Td(),document.activeElement!==document.body&&document.activeElement!==document.documentElement)u(document.activeElement).blur();else {var t=document.getSelection();null!==t&&t.removeAllRanges();}!this.ud.ji().wi()&&this.pi().bt().wi();}},t.prototype.kd=function(t){if(null!==this.ud){var i=this.pi();if(!i.bt().wi()){var n=this.ad.W(),s=n.handleScroll,h=n.kineticScroll;if(s.pressedMouseMove&&!t.Gv||(s.horzTouchDrag||s.vertTouchDrag)&&t.Gv){var r=this.ud.ji(),e=performance.now();null!==this.J_||this.Id(t)||(this.J_={x:t.Rv,y:t.Iv,So:e,Yv:t.Yv,$v:t.$v}),null!==this.ed&&this.ed.lc(t.Yv,e),null===this.J_||this.G_||this.J_.x===t.Rv&&this.J_.y===t.Iv||(null===this.ed&&(t.Gv&&h.touch||!t.Gv&&h.mouse)&&(this.ed=new yn(.2,7,.997,15),this.ed.lc(this.J_.Yv,this.J_.So),this.ed.lc(t.Yv,e)),r.wi()||i.Ja(this.ud,r,t.$v),i.Of(t.Yv),this.G_=!0),this.G_&&(r.wi()||i.Ga(this.ud,r,t.$v),i.Vf(t.Yv));}}}},t.prototype.Td=function(){var t=performance.now(),i=null===this.ed||this.ed.cc(t);null!==this.ed&&(i||this.Ud()),null!==this.ed&&(this.ed.dc(),this.ed=null);},t}(),Rn=function(){function t(t,i,n,s,h){var r=this;this.ft=!0,this.o_=new dn(0,0),this.d_=function(){return r.R_(3)},this.m_="left"===t,this.cf=n.qf,this.zi=i,this.Hd=s,this.Yd=h,this.p_=document.createElement("div"),this.p_.style.width="25px",this.p_.style.height="100%",this.p_.style.overflow="hidden",this.g_=mn(this.p_,new dn(16,16)),this.g_.subscribeCanvasConfigured(this.d_);}return t.prototype.g=function(){this.g_.unsubscribeCanvasConfigured(this.d_),this.g_.destroy();},t.prototype.B_=function(){return this.p_},t.prototype.Ld=function(){return this.o_},t.prototype.P_=function(t){if(t.Ft<0||t.Ot<0)throw new Error("Try to set invalid size to PriceAxisStub "+JSON.stringify(t));this.o_.br(t)||(this.o_=t,this.g_.resizeCanvas({width:t.Ft,height:t.Ot}),this.p_.style.width="".concat(t.Ft,"px"),this.p_.style.minWidth="".concat(t.Ft,"px"),this.p_.style.height="".concat(t.Ot,"px"),this.ft=!0);},t.prototype.R_=function(t){if((!(t<3)||this.ft)&&0!==this.o_.Ft&&0!==this.o_.Ot){this.ft=!1;var i=Mn(this.g_.canvas);this.j_(i,this.g_.pixelRatio),this.Rs(i,this.g_.pixelRatio);}},t.prototype.Y_=function(){return this.g_.canvas},t.prototype.Rs=function(t,i){if(this.Hd()){var n=this.o_.Ft;t.save(),t.fillStyle=this.zi.timeScale.borderColor;var s=Math.floor(this.cf.W().N*i),h=this.m_?Math.round(n*i)-s:0;t.fillRect(h,0,s,s),t.restore();}},t.prototype.j_=function(t,i){var n=this;q(t,i,(function(){U(t,0,0,n.o_.Ft,n.o_.Ot,n.Yd());}));},t}();function In(t,i){return t.Po>i.Po?t:i}var jn=function(){function t(t){var i=this;this.$d=null,this.Kd=null,this.k=null,this.Xd=!1,this.o_=new dn(0,0),this.Zd=new y,this.f_=new Rt(5),this.__=!1,this.d_=function(){i.__||i.ad.jt().Wr();},this.b_=function(){i.__||i.ad.jt().Wr();},this.ad=t,this.zi=t.W().layout,this.Jd=document.createElement("tr"),this.Gd=document.createElement("td"),this.Gd.style.padding="0",this.Qd=document.createElement("td"),this.Qd.style.padding="0",this.p_=document.createElement("td"),this.p_.style.height="25px",this.p_.style.padding="0",this.tw=document.createElement("div"),this.tw.style.width="100%",this.tw.style.height="100%",this.tw.style.position="relative",this.tw.style.overflow="hidden",this.p_.appendChild(this.tw),this.g_=mn(this.tw,new dn(16,16)),this.g_.subscribeCanvasConfigured(this.d_);var n=this.g_.canvas;n.style.position="absolute",n.style.zIndex="1",n.style.left="0",n.style.top="0",this.y_=mn(this.tw,new dn(16,16)),this.y_.subscribeCanvasConfigured(this.b_);var s=this.y_.canvas;s.style.position="absolute",s.style.zIndex="2",s.style.left="0",s.style.top="0",this.Jd.appendChild(this.Gd),this.Jd.appendChild(this.p_),this.Jd.appendChild(this.Qd),this.iw(),this.ad.jt().Pa().u(this.iw.bind(this),this),this.A_=new Sn(this.y_.canvas,this,{_v:function(){return !0},dv:function(){return !1}});}return t.prototype.g=function(){this.A_.g(),null!==this.$d&&this.$d.g(),null!==this.Kd&&this.Kd.g(),this.y_.unsubscribeCanvasConfigured(this.b_),this.y_.destroy(),this.g_.unsubscribeCanvasConfigured(this.d_),this.g_.destroy();},t.prototype.B_=function(){return this.Jd},t.prototype.nw=function(){return this.$d},t.prototype.sw=function(){return this.Kd},t.prototype.Tv=function(t){if(!this.Xd){this.Xd=!0;var i=this.ad.jt();!i.bt().wi()&&this.ad.W().handleScale.axisPressedMouseMove.time&&i.Lf(t.Yv);}},t.prototype.Cv=function(t){this.Tv(t);},t.prototype.Dv=function(){var t=this.ad.jt();!t.bt().wi()&&this.Xd&&(this.Xd=!1,this.ad.W().handleScale.axisPressedMouseMove.time&&t.zf());},t.prototype.bv=function(t){var i=this.ad.jt();!i.bt().wi()&&this.ad.W().handleScale.axisPressedMouseMove.time&&i.Wf(t.Yv);},t.prototype.wv=function(t){this.bv(t);},t.prototype.yv=function(){this.Xd=!1;var t=this.ad.jt();t.bt().wi()&&!this.ad.W().handleScale.axisPressedMouseMove.time||t.zf();},t.prototype.pv=function(){this.yv();},t.prototype.nv=function(){this.ad.W().handleScale.axisDoubleClickReset&&this.ad.jt().pn();},t.prototype.Gc=function(){this.nv();},t.prototype.ov=function(){this.ad.jt().W().handleScale.axisPressedMouseMove.time&&this.K_(1);},t.prototype.Wv=function(){this.K_(0);},t.prototype.Ld=function(){return this.o_},t.prototype.hw=function(){return this.Zd},t.prototype.rw=function(t,i,n){this.o_&&this.o_.br(t)||(this.o_=t,this.__=!0,this.g_.resizeCanvas({width:t.Ft,height:t.Ot}),this.y_.resizeCanvas({width:t.Ft,height:t.Ot}),this.__=!1,this.p_.style.width=t.Ft+"px",this.p_.style.height=t.Ot+"px",this.Zd.m(t)),null!==this.$d&&this.$d.P_(new dn(i,t.Ot)),null!==this.Kd&&this.Kd.P_(new dn(n,t.Ot));},t.prototype.ew=function(){var t=this.uw();return Math.ceil(t.N+t.C+t.S+t.O+t.B)},t.prototype.vt=function(){this.ad.jt().bt().au();},t.prototype.Y_=function(){return this.g_.canvas},t.prototype.R_=function(t){if(0!==t){if(1!==t){var i=Mn(this.g_.canvas);this.j_(i,this.g_.pixelRatio),this.Rs(i,this.g_.pixelRatio),this.q_(i,this.g_.pixelRatio),null!==this.$d&&this.$d.R_(t),null!==this.Kd&&this.Kd.R_(t);}var n=Mn(this.y_.canvas),s=this.y_.pixelRatio;n.clearRect(0,0,Math.ceil(this.o_.Ft*s),Math.ceil(this.o_.Ot*s)),this.aw([this.ad.jt().Tf()],n,s);}},t.prototype.j_=function(t,i){var n=this;q(t,i,(function(){U(t,0,0,n.o_.Ft,n.o_.Ot,n.ad.jt().Xf());}));},t.prototype.Rs=function(t,i){if(this.ad.W().timeScale.borderVisible){t.save(),t.fillStyle=this.ow();var n=Math.max(1,Math.floor(this.uw().N*i));t.fillRect(0,0,Math.ceil(this.o_.Ft*i),n),t.restore();}},t.prototype.q_=function(t,i){var n=this,s=this.ad.jt().bt().au();if(s&&0!==s.length){var h=s.reduce(In,s[0]).Po;h>30&&h<50&&(h=30),t.save(),t.strokeStyle=this.ow();var r=this.uw(),e=r.N+r.C+r.O+r.S-r.V;t.textAlign="center",t.fillStyle=this.ow();var u=Math.floor(this.uw().N*i),a=Math.max(1,Math.floor(i)),o=Math.floor(.5*i);if(this.ad.jt().bt().W().borderVisible){t.beginPath();for(var l=Math.round(r.C*i),f=s.length;f--;){var c=Math.round(s[f].su*i);t.rect(c-o,u,a,l);}t.fill();}t.fillStyle=this.j(),q(t,i,(function(){t.font=n.lw();for(var i=0,r=s;i<r.length;i++){if((l=r[i]).Po<h){var u=l.Sl?n.fw(t,l.su,l.yu):l.su;t.fillText(l.yu,u,e);}}t.font=n.cw();for(var a=0,o=s;a<o.length;a++){var l;if((l=o[a]).Po>=h){u=l.Sl?n.fw(t,l.su,l.yu):l.su;t.fillText(l.yu,u,e);}}})),t.restore();}},t.prototype.fw=function(t,i,n){var s=this.f_.Qt(t,n),h=s/2,r=Math.floor(i-h)+.5;return r<0?i+=Math.abs(0-r):r+s>this.o_.Ft&&(i-=Math.abs(this.o_.Ft-(r+s))),i},t.prototype.aw=function(t,i,n){for(var s=this.uw(),h=0,r=t;h<r.length;h++)for(var e=0,u=r[h].Ti();e<u.length;e++){var a=u[e];i.save(),a.dt().H(i,s,n),i.restore();}},t.prototype.ow=function(){return this.ad.W().timeScale.borderColor},t.prototype.j=function(){return this.zi.textColor},t.prototype.R=function(){return this.zi.fontSize},t.prototype.lw=function(){return L(this.R(),this.zi.fontFamily)},t.prototype.cw=function(){return L(this.R(),this.zi.fontFamily,"bold")},t.prototype.uw=function(){null===this.k&&(this.k={N:1,V:NaN,O:NaN,B:NaN,mi:NaN,C:3,S:NaN,T:"",bi:new Rt});var t=this.k,i=this.lw();if(t.T!==i){var n=this.R();t.S=n,t.T=i,t.O=Math.ceil(n/2.5),t.B=t.O,t.mi=Math.ceil(n/2),t.V=Math.round(this.R()/5),t.bi.ih();}return this.k},t.prototype.K_=function(t){this.p_.style.cursor=1===t?"ew-resize":"default";},t.prototype.iw=function(){var t=this.ad.jt(),i=t.W();i.leftPriceScale.visible||null===this.$d||(this.Gd.removeChild(this.$d.B_()),this.$d.g(),this.$d=null),i.rightPriceScale.visible||null===this.Kd||(this.Qd.removeChild(this.Kd.B_()),this.Kd.g(),this.Kd=null);var n={qf:this.ad.jt().qf()},s=function(){return i.leftPriceScale.borderVisible&&t.bt().W().borderVisible},h=function(){return t.Xf()};i.leftPriceScale.visible&&null===this.$d&&(this.$d=new Rn("left",i,n,s,h),this.Gd.appendChild(this.$d.B_())),i.rightPriceScale.visible&&null===this.Kd&&(this.Kd=new Rn("right",i,n,s,h),this.Qd.appendChild(this.Kd.B_()));},t}(),qn=function(){function t(t,i){var n;this._w=[],this.dw=0,this.xu=0,this.hh=0,this.ww=0,this.Mw=0,this.bw=null,this.mw=!1,this.Q_=new y,this.af=new y,this.zi=i,this.Jd=document.createElement("div"),this.Jd.classList.add("tv-lightweight-charts"),this.Jd.style.overflow="hidden",this.Jd.style.width="100%",this.Jd.style.height="100%",(n=this.Jd).style.userSelect="none",n.style.webkitUserSelect="none",n.style.msUserSelect="none",n.style.MozUserSelect="none",n.style.webkitTapHighlightColor="transparent",this.pw=document.createElement("table"),this.pw.setAttribute("cellspacing","0"),this.Jd.appendChild(this.pw),this.gw=this.yw.bind(this),this.Jd.addEventListener("wheel",this.gw,{passive:!1}),this.pi=new fn(this.ff.bind(this),this.zi),this.jt().Df().u(this.kw.bind(this),this),this.Nw=new jn(this),this.pw.appendChild(this.Nw.B_());var s=this.zi.width,h=this.zi.height;if(0===s||0===h){var r=t.getBoundingClientRect();0===s&&(s=Math.floor(r.width),s-=s%2),0===h&&(h=Math.floor(r.height),h-=h%2);}this.xw(s,h),this.Cw(),t.appendChild(this.Jd),this.Sw(),this.pi.bt().Pl().u(this.pi.Ce.bind(this.pi),this),this.pi.Pa().u(this.pi.Ce.bind(this.pi),this);}return t.prototype.jt=function(){return this.pi},t.prototype.W=function(){return this.zi},t.prototype.Tw=function(){return this._w},t.prototype.Dw=function(){return this.Nw},t.prototype.g=function(){this.Jd.removeEventListener("wheel",this.gw),0!==this.dw&&window.cancelAnimationFrame(this.dw),this.pi.Df().M(this),this.pi.bt().Pl().M(this),this.pi.Pa().M(this),this.pi.g();for(var t=0,i=this._w;t<i.length;t++){var n=i[t];this.pw.removeChild(n.B_()),n.Sd().M(this),n.g();}this._w=[],u(this.Nw).g(),null!==this.Jd.parentElement&&this.Jd.parentElement.removeChild(this.Jd),this.af.g(),this.Q_.g();},t.prototype.xw=function(t,i,n){if(void 0===n&&(n=!1),this.xu!==i||this.hh!==t){this.xu=i,this.hh=t;var s=i+"px",h=t+"px";u(this.Jd).style.height=s,u(this.Jd).style.width=h,this.pw.style.height=s,this.pw.style.width=h,n?this.Aw(new nt(3)):this.pi.Ce();}},t.prototype.R_=function(t){void 0===t&&(t=new nt(3));for(var i=0;i<this._w.length;i++)this._w[i].R_(t.wn(i).vn);this.zi.timeScale.visible&&this.Nw.R_(t.dn());},t.prototype.Pr=function(t){this.pi.Pr(t),this.Sw();var i=t.width||this.hh,n=t.height||this.xu;this.xw(i,n);},t.prototype.Sd=function(){return this.Q_},t.prototype.Df=function(){return this.af},t.prototype.Bw=function(){var t=this;null!==this.bw&&(this.Aw(this.bw),this.bw=null);var i=this._w[0],n=bn(document,new dn(this.hh,this.xu)),s=Mn(n),h=wn(n);return q(s,h,(function(){var n=0,h=0,r=function(i){for(var r=0;r<t._w.length;r++){var e=t._w[r],a=e.Ld().Ot,o=u("left"===i?e.Wd():e.zd()),l=o.Y_();s.drawImage(l,n,h,o.W_(),a),h+=a;}};t.Lw()&&(r("left"),n=u(i.Wd()).W_()),h=0;for(var e=0;e<t._w.length;e++){var a=t._w[e],o=a.Ld(),l=a.Y_();s.drawImage(l,n,h,o.Ft,o.Ot),h+=o.Ot;}n+=i.Ld().Ft,t.Ew()&&(h=0,r("right"));var f=function(i){var r=u("left"===i?t.Nw.nw():t.Nw.sw()),e=r.Ld(),a=r.Y_();s.drawImage(a,n,h,e.Ft,e.Ot);};if(t.zi.timeScale.visible){n=0,t.Lw()&&(f("left"),n=u(i.Wd()).W_());var c=t.Nw.Ld();l=t.Nw.Y_();s.drawImage(l,n,h,c.Ft,c.Ot),t.Ew()&&(n+=i.Ld().Ft,f("right"),s.restore());}})),n},t.prototype.Fw=function(t){return "none"===t?0:("left"!==t||this.Lw())&&("right"!==t||this.Ew())?0===this._w.length?0:u("left"===t?this._w[0].Wd():this._w[0].zd()).W_():0},t.prototype.Ow=function(){for(var t=0,i=0,n=0,s=0,h=this._w;s<h.length;s++){var r=h[s];this.Lw()&&(i=Math.max(i,u(r.Wd()).O_())),this.Ew()&&(n=Math.max(n,u(r.zd()).O_())),t+=r.Wa();}var e=this.hh,a=this.xu,o=Math.max(e-i-n,0),l=this.zi.timeScale.visible,f=l?this.Nw.ew():0;f%2&&(f+=1);for(var c=0+f,v=a<c?0:a-c,_=v/t,d=0,w=0;w<this._w.length;++w){(r=this._w[w]).wd(this.pi.Cf()[w]);var M,b=0;b=w===this._w.length-1?v-d:Math.round(r.Wa()*_),d+=M=Math.max(b,2),r.P_(new dn(o,M)),this.Lw()&&r.Bd(i,"left"),this.Ew()&&r.Bd(n,"right"),r.z_()&&this.pi.Af(r.z_(),M);}this.Nw.rw(new dn(l?o:0,f),l?i:0,l?n:0),this.pi.Ra(o),this.ww!==i&&(this.ww=i),this.Mw!==n&&(this.Mw=n);},t.prototype.yw=function(t){var i=t.deltaX/100,n=-t.deltaY/100;if(0!==i&&this.zi.handleScroll.mouseWheel||0!==n&&this.zi.handleScale.mouseWheel){switch(t.cancelable&&t.preventDefault(),t.deltaMode){case t.DOM_DELTA_PAGE:i*=120,n*=120;break;case t.DOM_DELTA_LINE:i*=32,n*=32;}if(0!==n&&this.zi.handleScale.mouseWheel){var s=Math.sign(n)*Math.min(1,Math.abs(n)),h=t.clientX-this.Jd.getBoundingClientRect().left;this.jt().Ef(h,s);}0!==i&&this.zi.handleScroll.mouseWheel&&this.jt().Ff(-80*i);}},t.prototype.Aw=function(t){var i,n=t.dn();3===n&&this.Vw(),3!==n&&2!==n||(this.Pw(t),this.Ww(t),this.Nw.vt(),this._w.forEach((function(t){t.bd();})),3===(null===(i=this.bw)||void 0===i?void 0:i.dn())&&(this.bw.Nn(t),this.Vw(),this.Pw(this.bw),this.Ww(this.bw),t=this.bw,this.bw=null)),this.R_(t);},t.prototype.Ww=function(t){for(var i=0,n=t.kn();i<n.length;i++){var s=n[i];this.xn(s);}},t.prototype.Pw=function(t){for(var i=this.pi.Cf(),n=0;n<i.length;n++)t.wn(n)._n&&i[n].so();},t.prototype.xn=function(t){var i=this.pi.bt();switch(t.bn){case 0:i.zl();break;case 1:i.Rl(t.St);break;case 2:i.gn(t.St);break;case 3:i.yn(t.St);break;case 4:i.Tl();}},t.prototype.ff=function(t){var i=this;null!==this.bw?this.bw.Nn(t):this.bw=t,this.mw||(this.mw=!0,this.dw=window.requestAnimationFrame((function(){if(i.mw=!1,i.dw=0,null!==i.bw){var t=i.bw;i.bw=null,i.Aw(t);}})));},t.prototype.Vw=function(){this.Cw();},t.prototype.Cw=function(){for(var t=this.pi.Cf(),i=t.length,n=this._w.length,s=i;s<n;s++){var h=e(this._w.pop());this.pw.removeChild(h.B_()),h.Sd().M(this),h.g();}for(s=n;s<i;s++){(h=new zn(this,t[s])).Sd().u(this.zw.bind(this),this),this._w.push(h),this.pw.insertBefore(h.B_(),this.Nw.B_());}for(s=0;s<i;s++){var r=t[s];(h=this._w[s]).z_()!==r?h.wd(r):h.dd();}this.Sw(),this.Ow();},t.prototype.Rw=function(t,i){var n,s=new Map;null!==t&&this.pi._t().forEach((function(i){var n=i.er(t);null!==n&&s.set(i,n);}));if(null!==t){var h=this.pi.bt().gi(t);null!==h&&(n=h);}var r=this.jt().gf(),e=null!==r&&r.kf instanceof gi?r.kf:void 0,u=null!==r&&void 0!==r.yd?r.yd.Zh:void 0;return {rt:n,Iw:i||void 0,jw:e,qw:s,Uw:u}},t.prototype.zw=function(t,i){var n=this;this.Q_.m((function(){return n.Rw(t,i)}));},t.prototype.kw=function(t,i){var n=this;this.af.m((function(){return n.Rw(t,i)}));},t.prototype.Sw=function(){var t=this.zi.timeScale.visible?"":"none";this.Nw.B_().style.display=t;},t.prototype.Lw=function(){return this._w[0].z_().Ya().W().visible},t.prototype.Ew=function(){return this._w[0].z_().$a().W().visible},t}();function Un(t,i,n){var s=n.value;return {vs:i,rt:t,St:[s,s,s,s]}}function Hn(t,i,n){var s=n.value,h={vs:i,rt:t,St:[s,s,s,s]};return "color"in n&&void 0!==n.color&&(h.A=n.color),h}function Yn(t){return void 0!==t.St}function $n(t){return function(i,n,s){return void 0===(h=s).open&&void 0===h.value?{rt:i,vs:n}:t(i,n,s);var h;}}var Kn={Candlestick:$n((function(t,i,n){var s={vs:i,rt:t,St:[n.open,n.high,n.low,n.close]};return "color"in n&&void 0!==n.color&&(s.A=n.color),"borderColor"in n&&void 0!==n.borderColor&&(s.Tt=n.borderColor),"wickColor"in n&&void 0!==n.wickColor&&(s.qs=n.wickColor),s})),Bar:$n((function(t,i,n){var s={vs:i,rt:t,St:[n.open,n.high,n.low,n.close]};return "color"in n&&void 0!==n.color&&(s.A=n.color),s})),Area:$n(Un),Baseline:$n(Un),Histogram:$n(Hn),Line:$n(Hn)};function Xn(t){return Kn[t]}function Zn(t){return 60*t*60*1e3}function Jn(t){return 60*t*1e3}var Gn,Qn=[{Hw:(Gn=1,1e3*Gn),Po:10},{Hw:Jn(1),Po:20},{Hw:Jn(5),Po:21},{Hw:Jn(30),Po:22},{Hw:Zn(1),Po:30},{Hw:Zn(3),Po:31},{Hw:Zn(6),Po:32},{Hw:Zn(12),Po:33}];function ts(t,i){if(t.getUTCFullYear()!==i.getUTCFullYear())return 70;if(t.getUTCMonth()!==i.getUTCMonth())return 60;if(t.getUTCDate()!==i.getUTCDate())return 50;for(var n=Qn.length-1;n>=0;--n)if(Math.floor(i.getTime()/Qn[n].Hw)!==Math.floor(t.getTime()/Qn[n].Hw))return Qn[n].Po;return 0}function is(t,i){if(void 0===i&&(i=0),0!==t.length){for(var n=0===i?null:t[i-1].rt.So,s=null!==n?new Date(1e3*n):null,h=0,r=i;r<t.length;++r){var e=t[r],u=new Date(1e3*e.rt.So);null!==s&&(e.Vo=ts(u,s)),h+=e.rt.So-(n||e.rt.So),n=e.rt.So,s=u;}if(0===i&&t.length>1){var a=Math.ceil(h/(t.length-1)),o=new Date(1e3*(t[0].rt.So-a));t[0].Vo=ts(new Date(1e3*t[0].rt.So),o);}}}function ns(t){if(!vn(t))throw new Error("time must be of type BusinessDay");var i=new Date(Date.UTC(t.year,t.month-1,t.day,0,0,0,0));return {So:Math.round(i.getTime()/1e3),Co:t}}function ss(t){if(!_n(t))throw new Error("time must be of type isUTCTimestamp");return {So:t}}function hs(t){return 0===t.length?null:vn(t[0].time)?ns:ss}function rs(t){return _n(t)?ss(t):vn(t)?ns(t):ns(es(t))}function es(t){var i=new Date(t);if(isNaN(i.getTime()))throw new Error("Invalid date string=".concat(t,", expected format=yyyy-mm-dd"));return {day:i.getUTCDate(),month:i.getUTCMonth()+1,year:i.getUTCFullYear()}}function us(t){C(t.time)&&(t.time=es(t.time));}function as(t){return {vs:0,Yw:new Map,Ve:t}}function os(t){if(void 0!==t&&0!==t.length)return {$w:t[0].rt.So,Kw:t[t.length-1].rt.So}}var ls=function(){function t(){this.Xw=new Map,this.Zw=new Map,this.Jw=new Map,this.Gw=[];}return t.prototype.g=function(){this.Xw.clear(),this.Zw.clear(),this.Jw.clear(),this.Gw=[];},t.prototype.Qw=function(t,i){var n=this,s=0!==this.Xw.size,h=!1,r=this.Zw.get(t);if(void 0!==r)if(1===this.Zw.size)s=!1,h=!0,this.Xw.clear();else for(var e=0,a=this.Gw;e<a.length;e++){a[e].pointData.Yw.delete(t)&&(h=!0);}var o=[];if(0!==i.length){!function(t){t.forEach(us);}(i);var l=u(hs(i)),f=Xn(t.Rr());o=i.map((function(i){var s=l(i.time),r=n.Xw.get(s.So);void 0===r&&(r=as(s),n.Xw.set(s.So,r),h=!0);var e=f(s,r.vs,i);return r.Yw.set(t,e),e}));}s&&this.tM(),this.iM(t,o);var c=-1;if(h){var v=[];this.Xw.forEach((function(t){v.push({Vo:0,rt:t.Ve,pointData:t});})),v.sort((function(t,i){return t.rt.So-i.rt.So})),c=this.nM(v);}return this.sM(t,c,function(t,i){var n=os(t),s=os(i);if(void 0!==n&&void 0!==s)return {Ae:n.Kw>=s.Kw&&n.$w>=s.$w}}(this.Zw.get(t),r))},t.prototype.Yf=function(t){return this.Qw(t,[])},t.prototype.hM=function(t,i){us(i);var n=u(hs([i]))(i.time),s=this.Jw.get(t);if(void 0!==s&&n.So<s.So)throw new Error("Cannot update oldest data, last time=".concat(s.So,", new time=").concat(n.So));var h=this.Xw.get(n.So),r=void 0===h;void 0===h&&(h=as(n),this.Xw.set(n.So,h));var e=Xn(t.Rr())(n,h.vs,i);h.Yw.set(t,e),this.rM(t,e);var a={Ae:Yn(e)};if(!r)return this.sM(t,-1,a);var o={Vo:0,rt:h.Ve,pointData:h},l=vt(this.Gw,o.rt.So,(function(t,i){return t.rt.So<i}));this.Gw.splice(l,0,o);for(var f=l;f<this.Gw.length;++f)fs(this.Gw[f].pointData,f);return is(this.Gw,l),this.sM(t,l,a)},t.prototype.rM=function(t,i){var n=this.Zw.get(t);void 0===n&&(n=[],this.Zw.set(t,n));var s=0!==n.length?n[n.length-1]:null;null===s||i.rt.So>s.rt.So?Yn(i)&&n.push(i):Yn(i)?n[n.length-1]=i:n.splice(-1,1),this.Jw.set(t,i.rt);},t.prototype.iM=function(t,i){0!==i.length?(this.Zw.set(t,i.filter(Yn)),this.Jw.set(t,i[i.length-1].rt)):(this.Zw.delete(t),this.Jw.delete(t));},t.prototype.tM=function(){for(var t=0,i=this.Gw;t<i.length;t++){var n=i[t];0===n.pointData.Yw.size&&this.Xw.delete(n.rt.So);}},t.prototype.nM=function(t){for(var i=-1,n=0;n<this.Gw.length&&n<t.length;++n){var s=this.Gw[n],h=t[n];if(s.rt.So!==h.rt.So){i=n;break}h.Vo=s.Vo,fs(h.pointData,n);}if(-1===i&&this.Gw.length!==t.length&&(i=Math.min(this.Gw.length,t.length)),-1===i)return -1;for(n=i;n<t.length;++n)fs(t[n].pointData,n);return is(t,i),this.Gw=t,i},t.prototype.eM=function(){if(0===this.Zw.size)return null;var t=0;return this.Zw.forEach((function(i){0!==i.length&&(t=Math.max(t,i[i.length-1].vs));})),t},t.prototype.sM=function(t,i,n){var s={uM:new Map,bt:{ml:this.eM()}};if(-1!==i)this.Zw.forEach((function(i,h){s.uM.set(h,{ph:i,aM:h===t?n:void 0});})),this.Zw.has(t)||s.uM.set(t,{ph:[],aM:n}),s.bt.oM=this.Gw,s.bt.lM=i;else {var h=this.Zw.get(t);s.uM.set(t,{ph:h||[],aM:n});}return s},t}();function fs(t,i){t.vs=i,t.Yw.forEach((function(t){t.vs=i;}));}var cs={color:"#FF0000",price:0,lineStyle:2,lineWidth:1,lineVisible:!0,axisLabelVisible:!0,title:""},vs=function(){function t(t){this.Lr=t;}return t.prototype.applyOptions=function(t){this.Lr.Pr(t);},t.prototype.options=function(){return this.Lr.W()},t.prototype.fM=function(){return this.Lr},t}();function _s(t){var i=t.overlay,n=function(t,i){var n={};for(var s in t)Object.prototype.hasOwnProperty.call(t,s)&&i.indexOf(s)<0&&(n[s]=t[s]);if(null!=t&&"function"==typeof Object.getOwnPropertySymbols){var h=0;for(s=Object.getOwnPropertySymbols(t);h<s.length;h++)i.indexOf(s[h])<0&&Object.prototype.propertyIsEnumerable.call(t,s[h])&&(n[s[h]]=t[s[h]]);}return n}(t,["overlay"]);return i&&(n.priceScaleId=""),n}var ds=function(){function t(t,i,n){this.Kn=t,this.cM=i,this.vM=n;}return t.prototype.priceFormatter=function(){return this.Kn.qe()},t.prototype.priceToCoordinate=function(t){var i=this.Kn.kt();return null===i?null:this.Kn.Ct().xt(t,i.St)},t.prototype.coordinateToPrice=function(t){var i=this.Kn.kt();return null===i?null:this.Kn.Ct().qi(t,i.St)},t.prototype.barsInLogicalRange=function(t){if(null===t)return null;var i=new nn(new Ji(t.from,t.to)).jo(),n=this.Kn.an();if(n.wi())return null;var s=n.ne(i.In(),1),h=n.ne(i.jn(),-1),r=u(n.Qr()),e=u(n.un());if(null!==s&&null!==h&&s.vs>h.vs)return {barsBefore:t.from-r,barsAfter:e-t.to};var a={barsBefore:null===s||s.vs===r?t.from-r:s.vs-r,barsAfter:null===h||h.vs===e?e-t.to:e-h.vs};return null!==s&&null!==h&&(a.from=s.rt.Co||s.rt.So,a.to=h.rt.Co||h.rt.So),a},t.prototype.setData=function(t){this.Kn.Rr(),this.cM._M(this.Kn,t);},t.prototype.update=function(t){this.Kn.Rr(),this.cM.dM(this.Kn,t);},t.prototype.setMarkers=function(t){var i=t.map((function(t){return p(p({},t),{time:rs(t.time)})}));this.Kn.Le(i);},t.prototype.applyOptions=function(t){var i=_s(t);this.Kn.Pr(i);},t.prototype.options=function(){return T(this.Kn.W())},t.prototype.priceScale=function(){return this.vM.priceScale(this.Kn.Ct().Ke())},t.prototype.createPriceLine=function(t){var i=k(T(cs),t),n=this.Kn.Ee(i);return new vs(n)},t.prototype.removePriceLine=function(t){this.Kn.Fe(t.fM());},t.prototype.seriesType=function(){return this.Kn.Rr()},t}(),ws=function(t){function i(){return null!==t&&t.apply(this,arguments)||this}return m(i,t),i.prototype.applyOptions=function(i){cn(i),t.prototype.applyOptions.call(this,i);},i}(ds),Ms={autoScale:!0,mode:0,invertScale:!1,alignLabels:!0,borderVisible:!0,borderColor:"#2B2B43",entireTextOnly:!1,visible:!1,drawTicks:!0,scaleMargins:{bottom:.1,top:.2}},bs={color:"rgba(0, 0, 0, 0)",visible:!1,fontSize:48,fontFamily:B,fontStyle:"",text:"",horzAlign:"center",vertAlign:"center"},ms={width:0,height:0,layout:{background:{type:"solid",color:"#FFFFFF"},textColor:"#191919",fontSize:11,fontFamily:B},crosshair:{vertLine:{color:"#758696",width:1,style:3,visible:!0,labelVisible:!0,labelBackgroundColor:"#4c525e"},horzLine:{color:"#758696",width:1,style:3,visible:!0,labelVisible:!0,labelBackgroundColor:"#4c525e"},mode:1},grid:{vertLines:{color:"#D6DCDE",style:0,visible:!0},horzLines:{color:"#D6DCDE",style:0,visible:!0}},overlayPriceScales:p({},Ms),leftPriceScale:p(p({},Ms),{visible:!1}),rightPriceScale:p(p({},Ms),{visible:!0}),timeScale:{rightOffset:0,barSpacing:6,minBarSpacing:.5,fixLeftEdge:!1,fixRightEdge:!1,lockVisibleTimeRangeOnResize:!1,rightBarStaysOnScroll:!1,borderVisible:!0,borderColor:"#2B2B43",visible:!0,timeVisible:!1,secondsVisible:!0,shiftVisibleRangeOnNewBar:!0},watermark:bs,localization:{locale:kn?navigator.language:"",dateFormat:"dd MMM 'yy"},handleScroll:{mouseWheel:!0,pressedMouseMove:!0,horzTouchDrag:!0,vertTouchDrag:!0},handleScale:{axisPressedMouseMove:{time:!0,price:!0},axisDoubleClickReset:!0,mouseWheel:!0,pinch:!0},kineticScroll:{mouse:!1,touch:!0},trackingMode:{exitMode:1}},ps={upColor:"#26a69a",downColor:"#ef5350",wickVisible:!0,borderVisible:!0,borderColor:"#378658",borderUpColor:"#26a69a",borderDownColor:"#ef5350",wickColor:"#737375",wickUpColor:"#26a69a",wickDownColor:"#ef5350"},gs={upColor:"#26a69a",downColor:"#ef5350",openVisible:!0,thinBars:!0},ys={color:"#2196f3",lineStyle:0,lineWidth:3,lineType:0,crosshairMarkerVisible:!0,crosshairMarkerRadius:4,crosshairMarkerBorderColor:"",crosshairMarkerBackgroundColor:"",lastPriceAnimation:0},ks={topColor:"rgba( 46, 220, 135, 0.4)",bottomColor:"rgba( 40, 221, 100, 0)",lineColor:"#33D778",lineStyle:0,lineWidth:3,lineType:0,crosshairMarkerVisible:!0,crosshairMarkerRadius:4,crosshairMarkerBorderColor:"",crosshairMarkerBackgroundColor:"",lastPriceAnimation:0},Ns={baseValue:{type:"price",price:0},topFillColor1:"rgba(38, 166, 154, 0.28)",topFillColor2:"rgba(38, 166, 154, 0.05)",topLineColor:"rgba(38, 166, 154, 1)",bottomFillColor1:"rgba(239, 83, 80, 0.05)",bottomFillColor2:"rgba(239, 83, 80, 0.28)",bottomLineColor:"rgba(239, 83, 80, 1)",lineWidth:3,lineStyle:0,crosshairMarkerVisible:!0,crosshairMarkerRadius:4,crosshairMarkerBorderColor:"",crosshairMarkerBackgroundColor:"",lastPriceAnimation:0},xs={color:"#26a69a",base:0},Cs={title:"",visible:!0,lastValueVisible:!0,priceLineVisible:!0,priceLineSource:0,priceLineWidth:1,priceLineColor:"",priceLineStyle:2,baseLineVisible:!0,baseLineWidth:1,baseLineColor:"#B2B5BE",baseLineStyle:0,priceFormat:{type:"price",precision:2,minMove:.01}},Ss=function(){function t(t,i){this.wM=t,this.MM=i;}return t.prototype.applyOptions=function(t){this.wM.jt().Nf(this.MM,t);},t.prototype.options=function(){return this._i().W()},t.prototype.width=function(){return it(this.MM)?this.wM.Fw("left"===this.MM?"left":"right"):0},t.prototype._i=function(){return u(this.wM.jt().xf(this.MM)).Ct},t}(),Ts=function(){function t(t,i){this.bM=new y,this.Go=new y,this.Zd=new y,this.pi=t,this.Da=t.bt(),this.Nw=i,this.Da.Ol().u(this.mM.bind(this)),this.Da.Vl().u(this.pM.bind(this)),this.Nw.hw().u(this.gM.bind(this));}return t.prototype.g=function(){this.Da.Ol().M(this),this.Da.Vl().M(this),this.Nw.hw().M(this),this.bM.g(),this.Go.g(),this.Zd.g();},t.prototype.scrollPosition=function(){return this.Da.Nl()},t.prototype.scrollToPosition=function(t,i){i?this.Da.Fl(t,1e3):this.pi.yn(t);},t.prototype.scrollToRealTime=function(){this.Da.El();},t.prototype.getVisibleRange=function(){var t,i,n=this.Da.cl();return null===n?null:{from:null!==(t=n.from.Co)&&void 0!==t?t:n.from.So,to:null!==(i=n.to.Co)&&void 0!==i?i:n.to.So}},t.prototype.setVisibleRange=function(t){var i={from:rs(t.from),to:rs(t.to)},n=this.Da.wl(i);this.pi.$f(n);},t.prototype.getVisibleLogicalRange=function(){var t=this.Da.fl();return null===t?null:{from:t.In(),to:t.jn()}},t.prototype.setVisibleLogicalRange=function(t){r(t.from<=t.to,"The from index cannot be after the to index."),this.pi.$f(t);},t.prototype.resetTimeScale=function(){this.pi.pn();},t.prototype.fitContent=function(){this.pi.zl();},t.prototype.logicalToCoordinate=function(t){var i=this.pi.bt();return i.wi()?null:i.At(t)},t.prototype.coordinateToLogical=function(t){return this.Da.wi()?null:this.Da.pl(t)},t.prototype.timeToCoordinate=function(t){var i=rs(t),n=this.Da.Ze(i,!1);return null===n?null:this.Da.At(n)},t.prototype.coordinateToTime=function(t){var i,n=this.pi.bt(),s=n.pl(t),h=n.gi(s);return null===h?null:null!==(i=h.Co)&&void 0!==i?i:h.So},t.prototype.width=function(){return this.Nw.Ld().Ft},t.prototype.height=function(){return this.Nw.Ld().Ot},t.prototype.subscribeVisibleTimeRangeChange=function(t){this.bM.u(t);},t.prototype.unsubscribeVisibleTimeRangeChange=function(t){this.bM._(t);},t.prototype.subscribeVisibleLogicalRangeChange=function(t){this.Go.u(t);},t.prototype.unsubscribeVisibleLogicalRangeChange=function(t){this.Go._(t);},t.prototype.subscribeSizeChange=function(t){this.Zd.u(t);},t.prototype.unsubscribeSizeChange=function(t){this.Zd._(t);},t.prototype.applyOptions=function(t){this.Da.Pr(t);},t.prototype.options=function(){return T(this.Da.W())},t.prototype.mM=function(){this.bM.p()&&this.bM.m(this.getVisibleRange());},t.prototype.pM=function(){this.Go.p()&&this.Go.m(this.getVisibleLogicalRange());},t.prototype.gM=function(t){this.Zd.m(t.Ft,t.Ot);},t}();function Ds(t){if(void 0!==t&&"custom"!==t.type){var i=t;void 0!==i.minMove&&void 0===i.precision&&(i.precision=function(t){if(t>=1)return 0;for(var i=0;i<8;i++){var n=Math.round(t);if(Math.abs(n-t)<1e-8)return i;t*=10;}return i}(i.minMove));}}function As(t){return function(t){if(S(t.handleScale)){var i=t.handleScale;t.handleScale={axisDoubleClickReset:i,axisPressedMouseMove:{time:i,price:i},mouseWheel:i,pinch:i};}else if(void 0!==t.handleScale&&S(t.handleScale.axisPressedMouseMove)){var n=t.handleScale.axisPressedMouseMove;t.handleScale.axisPressedMouseMove={time:n,price:n};}var s=t.handleScroll;S(s)&&(t.handleScroll={horzTouchDrag:s,vertTouchDrag:s,mouseWheel:s,pressedMouseMove:s});}(t),function(t){if(t.priceScale){t.leftPriceScale=t.leftPriceScale||{},t.rightPriceScale=t.rightPriceScale||{};var i=t.priceScale.position;delete t.priceScale.position,t.leftPriceScale=k(t.leftPriceScale,t.priceScale),t.rightPriceScale=k(t.rightPriceScale,t.priceScale),"left"===i&&(t.leftPriceScale.visible=!0,t.rightPriceScale.visible=!1),"right"===i&&(t.leftPriceScale.visible=!1,t.rightPriceScale.visible=!0),"none"===i&&(t.leftPriceScale.visible=!1,t.rightPriceScale.visible=!1),t.overlayPriceScales=t.overlayPriceScales||{},void 0!==t.priceScale.invertScale&&(t.overlayPriceScales.invertScale=t.priceScale.invertScale),void 0!==t.priceScale.scaleMargins&&(t.overlayPriceScales.scaleMargins=t.priceScale.scaleMargins);}}(t),function(t){t.layout&&t.layout.backgroundColor&&!t.layout.background&&(t.layout.background={type:"solid",color:t.layout.backgroundColor});}(t),t}var Bs=function(){function t(t,i){var n=this;this.yM=new ls,this.kM=new Map,this.NM=new Map,this.xM=new y,this.CM=new y;var s=void 0===i?T(ms):k(T(ms),As(i));this.wM=new qn(t,s),this.wM.Sd().u((function(t){n.xM.p()&&n.xM.m(n.SM(t()));}),this),this.wM.Df().u((function(t){n.CM.p()&&n.CM.m(n.SM(t()));}),this);var h=this.wM.jt();this.TM=new Ts(h,this.wM.Dw());}return t.prototype.remove=function(){this.wM.Sd().M(this),this.wM.Df().M(this),this.TM.g(),this.wM.g(),this.kM.clear(),this.NM.clear(),this.xM.g(),this.CM.g(),this.yM.g();},t.prototype.resize=function(t,i,n){this.wM.xw(t,i,n);},t.prototype.addAreaSeries=function(t){void 0===t&&(t={}),Ds((t=_s(t)).priceFormat);var i=k(T(Cs),ks,t),n=this.wM.jt().Uf("Area",i),s=new ds(n,this,this);return this.kM.set(s,n),this.NM.set(n,s),s},t.prototype.addBaselineSeries=function(t){void 0===t&&(t={}),Ds((t=_s(t)).priceFormat);var i=k(T(Cs),T(Ns),t),n=this.wM.jt().Uf("Baseline",i),s=new ds(n,this,this);return this.kM.set(s,n),this.NM.set(n,s),s},t.prototype.addBarSeries=function(t){void 0===t&&(t={}),Ds((t=_s(t)).priceFormat);var i=k(T(Cs),gs,t),n=this.wM.jt().Uf("Bar",i),s=new ds(n,this,this);return this.kM.set(s,n),this.NM.set(n,s),s},t.prototype.addCandlestickSeries=function(t){void 0===t&&(t={}),cn(t=_s(t)),Ds(t.priceFormat);var i=k(T(Cs),ps,t),n=this.wM.jt().Uf("Candlestick",i),s=new ws(n,this,this);return this.kM.set(s,n),this.NM.set(n,s),s},t.prototype.addHistogramSeries=function(t){void 0===t&&(t={}),Ds((t=_s(t)).priceFormat);var i=k(T(Cs),xs,t),n=this.wM.jt().Uf("Histogram",i),s=new ds(n,this,this);return this.kM.set(s,n),this.NM.set(n,s),s},t.prototype.addLineSeries=function(t){void 0===t&&(t={}),Ds((t=_s(t)).priceFormat);var i=k(T(Cs),ys,t),n=this.wM.jt().Uf("Line",i),s=new ds(n,this,this);return this.kM.set(s,n),this.NM.set(n,s),s},t.prototype.removeSeries=function(t){var i=e(this.kM.get(t)),n=this.yM.Yf(i);this.wM.jt().Yf(i),this.DM(n),this.kM.delete(t),this.NM.delete(i);},t.prototype._M=function(t,i){this.DM(this.yM.Qw(t,i));},t.prototype.dM=function(t,i){this.DM(this.yM.hM(t,i));},t.prototype.subscribeClick=function(t){this.xM.u(t);},t.prototype.unsubscribeClick=function(t){this.xM._(t);},t.prototype.subscribeCrosshairMove=function(t){this.CM.u(t);},t.prototype.unsubscribeCrosshairMove=function(t){this.CM._(t);},t.prototype.priceScale=function(t){return void 0===t&&(t=this.wM.jt().Kf()),new Ss(this.wM,t)},t.prototype.timeScale=function(){return this.TM},t.prototype.applyOptions=function(t){this.wM.Pr(As(t));},t.prototype.options=function(){return this.wM.W()},t.prototype.takeScreenshot=function(){return this.wM.Bw()},t.prototype.DM=function(t){var i=this.wM.jt();i.jf(t.bt.ml,t.bt.oM,t.bt.lM),t.uM.forEach((function(t,i){return i.Z(t.ph,t.aM)})),i.yl();},t.prototype.AM=function(t){return e(this.NM.get(t))},t.prototype.SM=function(t){var i=this,n=new Map;t.qw.forEach((function(t,s){n.set(i.AM(s),t);}));var s=void 0===t.jw?void 0:this.AM(t.jw);return {time:t.rt&&(t.rt.Co||t.rt.So),point:t.Iw,hoveredSeries:s,hoveredMarkerId:t.Uw,seriesPrices:n}},t}();function Ls(t,i){var n;if(C(t)){var s=document.getElementById(t);r(null!==s,"Cannot find element in DOM with id=".concat(t)),n=s;}else n=t;return new Bs(n,i)}

		/* src\components\SensorChart.svelte generated by Svelte v3.48.0 */

		const { Error: Error_1, Object: Object_1 } = globals;
		const file$2 = "src\\components\\SensorChart.svelte";

		function create_fragment$2(ctx) {
			let div4;
			let div1;
			let div0;
			let span0;
			let t0_value = strings.chartCrosshairValue + "";
			let t0;
			let t1;
			let t2;
			let t3;
			let br;
			let t4;
			let span1;
			let t5_value = strings.chartCrosshairTime + "";
			let t5;
			let t6;
			let t7;
			let div0_hidden_value;
			let style_top = `${/*crosshairLabelOffsetY*/ ctx[5]}px`;
			let style_left = `${/*crosshairLabelOffsetX*/ ctx[4]}px`;
			let t8;
			let div2;
			let t10;
			let div3;

			const block = {
				c: function create() {
					div4 = element("div");
					div1 = element("div");
					div0 = element("div");
					span0 = element("span");
					t0 = text(t0_value);
					t1 = space();
					t2 = text(/*crosshairCurrentValue*/ ctx[2]);
					t3 = space();
					br = element("br");
					t4 = space();
					span1 = element("span");
					t5 = text(t5_value);
					t6 = space();
					t7 = text(/*crosshairCurrentTime*/ ctx[3]);
					t8 = space();
					div2 = element("div");
					div2.textContent = `${/*labelY*/ ctx[8]}`;
					t10 = space();
					div3 = element("div");
					div3.textContent = `${/*labelX*/ ctx[7]}`;
					add_location(span0, file$2, 157, 12, 4844);
					add_location(br, file$2, 157, 79, 4911);
					add_location(span1, file$2, 158, 12, 4929);
					attr_dev(div0, "class", "crosshair-label svelte-1v605pv");
					div0.hidden = div0_hidden_value = !/*crosshairLabelVisible*/ ctx[6];
					set_style(div0, "top", style_top, false);
					set_style(div0, "left", style_left, false);
					add_location(div0, file$2, 155, 8, 4678);
					attr_dev(div1, "class", "chart svelte-1v605pv");
					add_location(div1, file$2, 154, 4, 4624);
					attr_dev(div2, "class", "chart-label chart-label-y svelte-1v605pv");
					add_location(div2, file$2, 161, 4, 5027);
					attr_dev(div3, "class", "chart-label chart-label-x svelte-1v605pv");
					add_location(div3, file$2, 162, 4, 5086);
					attr_dev(div4, "class", "chart-wrapper svelte-1v605pv");
					toggle_class(div4, "hidden", !/*isVisible*/ ctx[0]);
					add_location(div4, file$2, 153, 0, 4565);
				},
				l: function claim(nodes) {
					throw new Error_1("options.hydrate only works if the component was compiled with the `hydratable: true` option");
				},
				m: function mount(target, anchor) {
					insert_dev(target, div4, anchor);
					append_dev(div4, div1);
					append_dev(div1, div0);
					append_dev(div0, span0);
					append_dev(span0, t0);
					append_dev(span0, t1);
					append_dev(span0, t2);
					append_dev(div0, t3);
					append_dev(div0, br);
					append_dev(div0, t4);
					append_dev(div0, span1);
					append_dev(span1, t5);
					append_dev(span1, t6);
					append_dev(span1, t7);
					/*div1_binding*/ ctx[19](div1);
					append_dev(div4, t8);
					append_dev(div4, div2);
					append_dev(div4, t10);
					append_dev(div4, div3);
				},
				p: function update(ctx, dirty) {
					if (dirty[0] & /*crosshairCurrentValue*/ 4) set_data_dev(t2, /*crosshairCurrentValue*/ ctx[2]);
					if (dirty[0] & /*crosshairCurrentTime*/ 8) set_data_dev(t7, /*crosshairCurrentTime*/ ctx[3]);

					if (dirty[0] & /*crosshairLabelVisible*/ 64 && div0_hidden_value !== (div0_hidden_value = !/*crosshairLabelVisible*/ ctx[6])) {
						prop_dev(div0, "hidden", div0_hidden_value);
					}

					if (dirty[0] & /*crosshairLabelOffsetY*/ 32 && style_top !== (style_top = `${/*crosshairLabelOffsetY*/ ctx[5]}px`)) {
						set_style(div0, "top", style_top, false);
					}

					if (dirty[0] & /*crosshairLabelOffsetX*/ 16 && style_left !== (style_left = `${/*crosshairLabelOffsetX*/ ctx[4]}px`)) {
						set_style(div0, "left", style_left, false);
					}

					if (dirty[0] & /*isVisible*/ 1) {
						toggle_class(div4, "hidden", !/*isVisible*/ ctx[0]);
					}
				},
				i: noop,
				o: noop,
				d: function destroy(detaching) {
					if (detaching) detach_dev(div4);
					/*div1_binding*/ ctx[19](null);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_fragment$2.name,
				type: "component",
				source: "",
				ctx
			});

			return block;
		}

		function instance$2($$self, $$props, $$invalidate) {
			let { $$slots: slots = {}, $$scope } = $$props;
			validate_slots('SensorChart', slots, []);
			let { isVisible = true } = $$props;
			let { numberOfVisiblePoints = 100 } = $$props;
			let { sensor } = $$props;
			if (sensor === undefined) throw Error('SensorChart: Sensor must be specified');

			// Internal
			let minValue = sensor.mode.minValue;

			let maxValue = sensor.mode.maxValue;
			const labelX = strings.time;
			const unit = sensor.mode.unit;
			const labelY = `${sensor.name} [${sensor.mode.unit}]`;
			const lineColor = sensor.lineColor;
			const markerColor = sensor.markerColor;
			const lineSize = sensor.lineSize;
			const markerSize = sensor.markerSize;
			const data = [];
			let chartElement;
			let timeScale = undefined;
			let chart;
			let lineSeries;
			let isPaused = false;
			let crosshairCurrentValue = "";
			let crosshairCurrentTime = "";
			let crosshairLabelOffsetX = 0;
			let crosshairLabelOffsetY = 0;
			let crosshairLabelVisible = false;

			onMount(() => {
				chart = Ls(chartElement, {
					crosshair: { vertLine: { labelVisible: false } },
					rightPriceScale: {
						scaleMargins: { top: 0.01, bottom: 0.01 }
					}
				});

				timeScale = chart.timeScale();

				timeScale.applyOptions({
					timeVisible: true,
					secondsVisible: true,
					tickMarkFormatter: msToString
				});

				timeScale.setVisibleLogicalRange({
					from: -(numberOfVisiblePoints / 2),
					to: numberOfVisiblePoints / 2
				});

				lineSeries = chart.addLineSeries({
					lastValueVisible: true,
					color: lineColor,
					lineWidth: lineSize
				});

				chart.subscribeCrosshairMove(event => {
					$$invalidate(6, crosshairLabelVisible = event.time && event.seriesPrices.size > 0);
					if (!crosshairLabelVisible) return;
					const value = event.seriesPrices.get(lineSeries);
					$$invalidate(2, crosshairCurrentValue = value + unit);
					$$invalidate(3, crosshairCurrentTime = msToString(event.time));
					$$invalidate(4, crosshairLabelOffsetX = event.point.x);
					$$invalidate(5, crosshairLabelOffsetY = event.point.y);
				});

				update();

				const onResize = () => {
					chart.resize(chartElement.clientWidth, chartElement.clientHeight, true);
				};

				window.addEventListener('resize', onResize);
				applyMinMax(minValue, maxValue);

				return () => {
					chart.remove();
					window.removeEventListener('resize', onResize);
				};
			});

			const defaultMarker = {
				time: 0,
				position: 'inBar',
				color: sensor.markerColor,
				shape: 'circle',
				size: sensor.markerSize
			};

			function update() {
				lineSeries === null || lineSeries === void 0
						? void 0
						: lineSeries.setData(data);

				lineSeries === null || lineSeries === void 0
						? void 0
						: lineSeries.setMarkers(data.map(d => getMarker(d.time)));
			}

			function getMarker(time) {
				const copy = Object.assign({}, defaultMarker);
				copy.time = time;
				return copy;
			}

			function addData(newValue) {
				data.push(newValue);
				if (!isPaused && isVisible) update(); // optimization
			}

			function zoomIn() {
				const range = timeScale.getVisibleLogicalRange();
				const step = range.to / 10;
				range.to -= step;
				range.from += step;
				if (range.to < range.from) return;
				timeScale.setVisibleLogicalRange(range);
			}

			function zoomOut() {
				const range = timeScale.getVisibleLogicalRange();
				const step = range.to / 10;
				range.to += step;
				range.from -= step;
				timeScale.setVisibleLogicalRange(range);
			}

			function resetZoom() {
				const pivot = data.length;

				timeScale.setVisibleLogicalRange({
					from: pivot - numberOfVisiblePoints,
					to: pivot + numberOfVisiblePoints
				});
			}

			function pause() {
				$$invalidate(18, isPaused = true);
				update();
			}

			function start() {
				$$invalidate(18, isPaused = false);
				update();
			}

			function applyMinMax(min, max) {
				lineSeries.applyOptions({
					autoscaleInfoProvider: () => ({
						priceRange: { minValue: min, maxValue: max },
						margins: { above: 0.1, below: 0.1 }
					})
				});
			}

			const writable_props = ['isVisible', 'numberOfVisiblePoints', 'sensor'];

			Object_1.keys($$props).forEach(key => {
				if (!~writable_props.indexOf(key) && key.slice(0, 2) !== '$$' && key !== 'slot') console.warn(`<SensorChart> was created with unknown prop '${key}'`);
			});

			function div1_binding($$value) {
				binding_callbacks[$$value ? 'unshift' : 'push'](() => {
					chartElement = $$value;
					$$invalidate(1, chartElement);
				});
			}

			$$self.$$set = $$props => {
				if ('isVisible' in $$props) $$invalidate(0, isVisible = $$props.isVisible);
				if ('numberOfVisiblePoints' in $$props) $$invalidate(9, numberOfVisiblePoints = $$props.numberOfVisiblePoints);
				if ('sensor' in $$props) $$invalidate(10, sensor = $$props.sensor);
			};

			$$self.$capture_state = () => ({
				createChart: Ls,
				onMount,
				msToString,
				strings,
				isVisible,
				numberOfVisiblePoints,
				sensor,
				minValue,
				maxValue,
				labelX,
				unit,
				labelY,
				lineColor,
				markerColor,
				lineSize,
				markerSize,
				data,
				chartElement,
				timeScale,
				chart,
				lineSeries,
				isPaused,
				crosshairCurrentValue,
				crosshairCurrentTime,
				crosshairLabelOffsetX,
				crosshairLabelOffsetY,
				crosshairLabelVisible,
				defaultMarker,
				update,
				getMarker,
				addData,
				zoomIn,
				zoomOut,
				resetZoom,
				pause,
				start,
				applyMinMax
			});

			$$self.$inject_state = $$props => {
				if ('isVisible' in $$props) $$invalidate(0, isVisible = $$props.isVisible);
				if ('numberOfVisiblePoints' in $$props) $$invalidate(9, numberOfVisiblePoints = $$props.numberOfVisiblePoints);
				if ('sensor' in $$props) $$invalidate(10, sensor = $$props.sensor);
				if ('minValue' in $$props) minValue = $$props.minValue;
				if ('maxValue' in $$props) maxValue = $$props.maxValue;
				if ('chartElement' in $$props) $$invalidate(1, chartElement = $$props.chartElement);
				if ('timeScale' in $$props) timeScale = $$props.timeScale;
				if ('chart' in $$props) chart = $$props.chart;
				if ('lineSeries' in $$props) lineSeries = $$props.lineSeries;
				if ('isPaused' in $$props) $$invalidate(18, isPaused = $$props.isPaused);
				if ('crosshairCurrentValue' in $$props) $$invalidate(2, crosshairCurrentValue = $$props.crosshairCurrentValue);
				if ('crosshairCurrentTime' in $$props) $$invalidate(3, crosshairCurrentTime = $$props.crosshairCurrentTime);
				if ('crosshairLabelOffsetX' in $$props) $$invalidate(4, crosshairLabelOffsetX = $$props.crosshairLabelOffsetX);
				if ('crosshairLabelOffsetY' in $$props) $$invalidate(5, crosshairLabelOffsetY = $$props.crosshairLabelOffsetY);
				if ('crosshairLabelVisible' in $$props) $$invalidate(6, crosshairLabelVisible = $$props.crosshairLabelVisible);
			};

			if ($$props && "$$inject" in $$props) {
				$$self.$inject_state($$props.$$inject);
			}

			$$self.$$.update = () => {
				if ($$self.$$.dirty[0] & /*isVisible, isPaused*/ 262145) {
					// External
					// Subscribe to visible changed
					isVisible && !isPaused && update();
				}
			};

			return [
				isVisible,
				chartElement,
				crosshairCurrentValue,
				crosshairCurrentTime,
				crosshairLabelOffsetX,
				crosshairLabelOffsetY,
				crosshairLabelVisible,
				labelX,
				labelY,
				numberOfVisiblePoints,
				sensor,
				addData,
				zoomIn,
				zoomOut,
				resetZoom,
				pause,
				start,
				applyMinMax,
				isPaused,
				div1_binding
			];
		}

		class SensorChart extends SvelteComponentDev {
			constructor(options) {
				super(options);

				init(
						this,
						options,
						instance$2,
						create_fragment$2,
						safe_not_equal,
						{
							isVisible: 0,
							numberOfVisiblePoints: 9,
							sensor: 10,
							addData: 11,
							zoomIn: 12,
							zoomOut: 13,
							resetZoom: 14,
							pause: 15,
							start: 16,
							applyMinMax: 17
						},
						null,
						[-1, -1]
				);

				dispatch_dev("SvelteRegisterComponent", {
					component: this,
					tagName: "SensorChart",
					options,
					id: create_fragment$2.name
				});

				const { ctx } = this.$$;
				const props = options.props || {};

				if (/*sensor*/ ctx[10] === undefined && !('sensor' in props)) {
					console.warn("<SensorChart> was created without expected prop 'sensor'");
				}
			}

			get isVisible() {
				throw new Error_1("<SensorChart>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set isVisible(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get numberOfVisiblePoints() {
				throw new Error_1("<SensorChart>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set numberOfVisiblePoints(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get sensor() {
				throw new Error_1("<SensorChart>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set sensor(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get addData() {
				return this.$$.ctx[11];
			}

			set addData(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get zoomIn() {
				return this.$$.ctx[12];
			}

			set zoomIn(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get zoomOut() {
				return this.$$.ctx[13];
			}

			set zoomOut(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get resetZoom() {
				return this.$$.ctx[14];
			}

			set resetZoom(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get pause() {
				return this.$$.ctx[15];
			}

			set pause(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get start() {
				return this.$$.ctx[16];
			}

			set start(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			get applyMinMax() {
				return this.$$.ctx[17];
			}

			set applyMinMax(value) {
				throw new Error_1("<SensorChart>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}
		}

		/* src\views\Dashboard.svelte generated by Svelte v3.48.0 */
		const file$1 = "src\\views\\Dashboard.svelte";

		function get_each_context(ctx, list, i) {
			const child_ctx = ctx.slice();
			child_ctx[19] = list[i];
			child_ctx[20] = list;
			child_ctx[21] = i;
			return child_ctx;
		}

		function get_each_context_1(ctx, list, i) {
			const child_ctx = ctx.slice();
			child_ctx[19] = list[i];
			child_ctx[21] = i;
			return child_ctx;
		}

		// (71:12) {#each sensors as sensor, i}
		function create_each_block_1(ctx) {
			let sidebarsensor;
			let current;

			function click_handler() {
				return /*click_handler*/ ctx[13](/*i*/ ctx[21]);
			}

			function applyMinMax_handler(...args) {
				return /*applyMinMax_handler*/ ctx[14](/*i*/ ctx[21], ...args);
			}

			sidebarsensor = new SidebarSensor({
				props: {
					value: /*values*/ ctx[7][/*i*/ ctx[21]] ?? strings.noData,
					selected: /*selectedIdx*/ ctx[3] === /*i*/ ctx[21],
					maxValue: /*sensor*/ ctx[19].mode.maxValue,
					minValue: /*sensor*/ ctx[19].mode.minValue,
					label: /*sensor*/ ctx[19].name,
					icon: /*sensor*/ ctx[19].ico,
					unit: /*sensor*/ ctx[19].mode.unit
				},
				$$inline: true
			});

			sidebarsensor.$on("click", click_handler);
			sidebarsensor.$on("applyMinMax", applyMinMax_handler);

			const block = {
				c: function create() {
					create_component(sidebarsensor.$$.fragment);
				},
				m: function mount(target, anchor) {
					mount_component(sidebarsensor, target, anchor);
					current = true;
				},
				p: function update(new_ctx, dirty) {
					ctx = new_ctx;
					const sidebarsensor_changes = {};
					if (dirty & /*values*/ 128) sidebarsensor_changes.value = /*values*/ ctx[7][/*i*/ ctx[21]] ?? strings.noData;
					if (dirty & /*selectedIdx*/ 8) sidebarsensor_changes.selected = /*selectedIdx*/ ctx[3] === /*i*/ ctx[21];
					if (dirty & /*sensors*/ 1) sidebarsensor_changes.maxValue = /*sensor*/ ctx[19].mode.maxValue;
					if (dirty & /*sensors*/ 1) sidebarsensor_changes.minValue = /*sensor*/ ctx[19].mode.minValue;
					if (dirty & /*sensors*/ 1) sidebarsensor_changes.label = /*sensor*/ ctx[19].name;
					if (dirty & /*sensors*/ 1) sidebarsensor_changes.icon = /*sensor*/ ctx[19].ico;
					if (dirty & /*sensors*/ 1) sidebarsensor_changes.unit = /*sensor*/ ctx[19].mode.unit;
					sidebarsensor.$set(sidebarsensor_changes);
				},
				i: function intro(local) {
					if (current) return;
					transition_in(sidebarsensor.$$.fragment, local);
					current = true;
				},
				o: function outro(local) {
					transition_out(sidebarsensor.$$.fragment, local);
					current = false;
				},
				d: function destroy(detaching) {
					destroy_component(sidebarsensor, detaching);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_each_block_1.name,
				type: "each",
				source: "(71:12) {#each sensors as sensor, i}",
				ctx
			});

			return block;
		}

		// (113:12) {#each sensors as sensor, i}
		function create_each_block(ctx) {
			let sensorchart;
			let i = /*i*/ ctx[21];
			let current;
			const assign_sensorchart = () => /*sensorchart_binding*/ ctx[16](sensorchart, i);
			const unassign_sensorchart = () => /*sensorchart_binding*/ ctx[16](null, i);

			let sensorchart_props = {
				isVisible: /*i*/ ctx[21] === /*selectedIdx*/ ctx[3] && /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Graphics,
				sensor: /*sensor*/ ctx[19],
				numberOfVisiblePoints: /*numberOfVisiblePoints*/ ctx[9]
			};

			sensorchart = new SensorChart({ props: sensorchart_props, $$inline: true });
			assign_sensorchart();

			const block = {
				c: function create() {
					create_component(sensorchart.$$.fragment);
				},
				m: function mount(target, anchor) {
					mount_component(sensorchart, target, anchor);
					current = true;
				},
				p: function update(ctx, dirty) {
					if (i !== /*i*/ ctx[21]) {
						unassign_sensorchart();
						i = /*i*/ ctx[21];
						assign_sensorchart();
					}

					const sensorchart_changes = {};
					if (dirty & /*selectedIdx, dataDisplay, DataDisplay*/ 14) sensorchart_changes.isVisible = /*i*/ ctx[21] === /*selectedIdx*/ ctx[3] && /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Graphics;
					if (dirty & /*sensors*/ 1) sensorchart_changes.sensor = /*sensor*/ ctx[19];
					sensorchart.$set(sensorchart_changes);
				},
				i: function intro(local) {
					if (current) return;
					transition_in(sensorchart.$$.fragment, local);
					current = true;
				},
				o: function outro(local) {
					transition_out(sensorchart.$$.fragment, local);
					current = false;
				},
				d: function destroy(detaching) {
					unassign_sensorchart();
					destroy_component(sensorchart, detaching);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_each_block.name,
				type: "each",
				source: "(113:12) {#each sensors as sensor, i}",
				ctx
			});

			return block;
		}

		function create_fragment$1(ctx) {
			let t0;
			let div7;
			let div2;
			let div0;
			let img0;
			let img0_src_value;
			let t1;
			let div1;
			let t2;
			let div6;
			let div4;
			let button0;
			let img1;
			let img1_src_value;
			let t3;
			let h1;

			let t4_value = (/*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures
					? strings.measuresTitle
					: strings.graphicsTitle) + "";

			let t4;
			let t5;
			let div3;
			let button1;
			let img2;
			let img2_src_value;
			let t6;
			let button2;
			let img3;
			let img3_src_value;
			let t7;
			let button3;
			let img4;
			let img4_src_value;
			let button3_disabled_value;
			let t8;
			let button4;
			let img5;
			let img5_src_value;
			let button4_disabled_value;
			let t9;
			let button5;
			let img6;
			let img6_src_value;
			let button5_disabled_value;
			let t10;
			let div5;
			let t11;
			let sensorstable;
			let current;
			let mounted;
			let dispose;
			let each_value_1 = /*sensors*/ ctx[0];
			validate_each_argument(each_value_1);
			let each_blocks_1 = [];

			for (let i = 0; i < each_value_1.length; i += 1) {
				each_blocks_1[i] = create_each_block_1(get_each_context_1(ctx, each_value_1, i));
			}

			const out = i => transition_out(each_blocks_1[i], 1, 1, () => {
				each_blocks_1[i] = null;
			});

			let each_value = /*sensors*/ ctx[0];
			validate_each_argument(each_value);
			let each_blocks = [];

			for (let i = 0; i < each_value.length; i += 1) {
				each_blocks[i] = create_each_block(get_each_context(ctx, each_value, i));
			}

			const out_1 = i => transition_out(each_blocks[i], 1, 1, () => {
				each_blocks[i] = null;
			});

			let sensorstable_props = { headers: /*tableHeader*/ ctx[8] };

			sensorstable = new SensorsTable({
				props: sensorstable_props,
				$$inline: true
			});

			/*sensorstable_binding*/ ctx[17](sensorstable);

			const block = {
				c: function create() {
					t0 = space();
					div7 = element("div");
					div2 = element("div");
					div0 = element("div");
					img0 = element("img");
					t1 = space();
					div1 = element("div");

					for (let i = 0; i < each_blocks_1.length; i += 1) {
						each_blocks_1[i].c();
					}

					t2 = space();
					div6 = element("div");
					div4 = element("div");
					button0 = element("button");
					img1 = element("img");
					t3 = space();
					h1 = element("h1");
					t4 = text(t4_value);
					t5 = space();
					div3 = element("div");
					button1 = element("button");
					img2 = element("img");
					t6 = space();
					button2 = element("button");
					img3 = element("img");
					t7 = space();
					button3 = element("button");
					img4 = element("img");
					t8 = space();
					button4 = element("button");
					img5 = element("img");
					t9 = space();
					button5 = element("button");
					img6 = element("img");
					t10 = space();
					div5 = element("div");

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].c();
					}

					t11 = space();
					create_component(sensorstable.$$.fragment);
					if (!src_url_equal(img0.src, img0_src_value = "/img/logo.png")) attr_dev(img0, "src", img0_src_value);
					attr_dev(img0, "alt", "");
					attr_dev(img0, "class", "svelte-1pxicek");
					add_location(img0, file$1, 67, 12, 2209);
					attr_dev(div0, "class", "logo-wrapper svelte-1pxicek");
					add_location(div0, file$1, 66, 8, 2169);
					attr_dev(div1, "class", "sidebar-sensor-list svelte-1pxicek");
					add_location(div1, file$1, 69, 8, 2267);
					attr_dev(div2, "class", "column sidebar svelte-1pxicek");
					add_location(div2, file$1, 65, 4, 2131);
					if (!src_url_equal(img1.src, img1_src_value = "/img/arrow.svg")) attr_dev(img1, "src", img1_src_value);
					attr_dev(img1, "class", "svelte-1pxicek");
					add_location(img1, file$1, 85, 16, 2994);
					attr_dev(button0, "class", "header__back-button svelte-1pxicek");
					add_location(button0, file$1, 84, 12, 2940);
					attr_dev(h1, "class", "header__title svelte-1pxicek");
					add_location(h1, file$1, 88, 12, 3059);

					if (!src_url_equal(img2.src, img2_src_value = /*paused*/ ctx[4]
							? "/img/ico_start.png"
							: "/img/ico_pause.png")) attr_dev(img2, "src", img2_src_value);

					attr_dev(img2, "class", "svelte-1pxicek");
					add_location(img2, file$1, 94, 20, 3359);
					attr_dev(button1, "class", "play-pause svelte-1pxicek");
					add_location(button1, file$1, 93, 16, 3275);

					if (!src_url_equal(img3.src, img3_src_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures
							? "/img/ico_measure.png"
							: "/img/ico_graphics.png")) attr_dev(img3, "src", img3_src_value);

					attr_dev(img3, "class", "svelte-1pxicek");
					add_location(img3, file$1, 97, 20, 3556);
					attr_dev(button2, "class", "measure-graphics svelte-1pxicek");
					add_location(button2, file$1, 96, 16, 3468);
					if (!src_url_equal(img4.src, img4_src_value = "/img/ico_zoom.png")) attr_dev(img4, "src", img4_src_value);
					attr_dev(img4, "alt", "zoom");
					attr_dev(img4, "class", "svelte-1pxicek");
					add_location(img4, file$1, 100, 20, 3820);
					button3.disabled = button3_disabled_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures;
					attr_dev(button3, "class", "svelte-1pxicek");
					add_location(button3, file$1, 99, 16, 3700);
					if (!src_url_equal(img5.src, img5_src_value = "/img/ico_zoom_out.png")) attr_dev(img5, "src", img5_src_value);
					attr_dev(img5, "alt", "zoom_out");
					attr_dev(img5, "class", "svelte-1pxicek");
					add_location(img5, file$1, 103, 20, 4022);
					button4.disabled = button4_disabled_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures;
					attr_dev(button4, "class", "svelte-1pxicek");
					add_location(button4, file$1, 102, 16, 3905);
					if (!src_url_equal(img6.src, img6_src_value = "/img/ico_zoom_in.png")) attr_dev(img6, "src", img6_src_value);
					attr_dev(img6, "alt", "zoom_in");
					attr_dev(img6, "class", "svelte-1pxicek");
					add_location(img6, file$1, 106, 20, 4232);
					button5.disabled = button5_disabled_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures;
					attr_dev(button5, "class", "svelte-1pxicek");
					add_location(button5, file$1, 105, 16, 4116);
					attr_dev(div3, "class", "row header__buttons svelte-1pxicek");
					add_location(div3, file$1, 92, 12, 3224);
					attr_dev(div4, "class", "header svelte-1pxicek");
					add_location(div4, file$1, 83, 8, 2906);
					attr_dev(div5, "class", "charts-wrapper svelte-1pxicek");
					add_location(div5, file$1, 111, 8, 4354);
					attr_dev(div6, "class", "column work-screen svelte-1pxicek");
					add_location(div6, file$1, 81, 4, 2862);
					attr_dev(div7, "class", "wrapper svelte-1pxicek");
					add_location(div7, file$1, 64, 0, 2104);
				},
				l: function claim(nodes) {
					throw new Error("options.hydrate only works if the component was compiled with the `hydratable: true` option");
				},
				m: function mount(target, anchor) {
					insert_dev(target, t0, anchor);
					insert_dev(target, div7, anchor);
					append_dev(div7, div2);
					append_dev(div2, div0);
					append_dev(div0, img0);
					append_dev(div2, t1);
					append_dev(div2, div1);

					for (let i = 0; i < each_blocks_1.length; i += 1) {
						each_blocks_1[i].m(div1, null);
					}

					append_dev(div7, t2);
					append_dev(div7, div6);
					append_dev(div6, div4);
					append_dev(div4, button0);
					append_dev(button0, img1);
					append_dev(div4, t3);
					append_dev(div4, h1);
					append_dev(h1, t4);
					append_dev(div4, t5);
					append_dev(div4, div3);
					append_dev(div3, button1);
					append_dev(button1, img2);
					append_dev(div3, t6);
					append_dev(div3, button2);
					append_dev(button2, img3);
					append_dev(div3, t7);
					append_dev(div3, button3);
					append_dev(button3, img4);
					append_dev(div3, t8);
					append_dev(div3, button4);
					append_dev(button4, img5);
					append_dev(div3, t9);
					append_dev(div3, button5);
					append_dev(button5, img6);
					append_dev(div6, t10);
					append_dev(div6, div5);

					for (let i = 0; i < each_blocks.length; i += 1) {
						each_blocks[i].m(div5, null);
					}

					append_dev(div5, t11);
					mount_component(sensorstable, div5, null);
					current = true;

					if (!mounted) {
						dispose = [
							listen_dev(button1, "click", /*click_handler_1*/ ctx[15], false, false, false),
							listen_dev(button2, "click", /*toggleMeasureGraphics*/ ctx[11], false, false, false),
							listen_dev(
									button3,
									"click",
									function () {
										if (is_function(/*charts*/ ctx[5][/*selectedIdx*/ ctx[3]].resetZoom)) /*charts*/ ctx[5][/*selectedIdx*/ ctx[3]].resetZoom.apply(this, arguments);
									},
									false,
									false,
									false
							),
							listen_dev(
									button4,
									"click",
									function () {
										if (is_function(/*charts*/ ctx[5][/*selectedIdx*/ ctx[3]].zoomOut)) /*charts*/ ctx[5][/*selectedIdx*/ ctx[3]].zoomOut.apply(this, arguments);
									},
									false,
									false,
									false
							),
							listen_dev(
									button5,
									"click",
									function () {
										if (is_function(/*charts*/ ctx[5][/*selectedIdx*/ ctx[3]].zoomIn)) /*charts*/ ctx[5][/*selectedIdx*/ ctx[3]].zoomIn.apply(this, arguments);
									},
									false,
									false,
									false
							)
						];

						mounted = true;
					}
				},
				p: function update(new_ctx, [dirty]) {
					ctx = new_ctx;

					if (dirty & /*values, strings, selectedIdx, sensors, selectSensor, charts*/ 4265) {
						each_value_1 = /*sensors*/ ctx[0];
						validate_each_argument(each_value_1);
						let i;

						for (i = 0; i < each_value_1.length; i += 1) {
							const child_ctx = get_each_context_1(ctx, each_value_1, i);

							if (each_blocks_1[i]) {
								each_blocks_1[i].p(child_ctx, dirty);
								transition_in(each_blocks_1[i], 1);
							} else {
								each_blocks_1[i] = create_each_block_1(child_ctx);
								each_blocks_1[i].c();
								transition_in(each_blocks_1[i], 1);
								each_blocks_1[i].m(div1, null);
							}
						}

						group_outros();

						for (i = each_value_1.length; i < each_blocks_1.length; i += 1) {
							out(i);
						}

						check_outros();
					}

					if ((!current || dirty & /*dataDisplay, DataDisplay*/ 6) && t4_value !== (t4_value = (/*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures
							? strings.measuresTitle
							: strings.graphicsTitle) + "")) set_data_dev(t4, t4_value);

					if (!current || dirty & /*paused*/ 16 && !src_url_equal(img2.src, img2_src_value = /*paused*/ ctx[4]
							? "/img/ico_start.png"
							: "/img/ico_pause.png")) {
						attr_dev(img2, "src", img2_src_value);
					}

					if (!current || dirty & /*dataDisplay, DataDisplay*/ 6 && !src_url_equal(img3.src, img3_src_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures
							? "/img/ico_measure.png"
							: "/img/ico_graphics.png")) {
						attr_dev(img3, "src", img3_src_value);
					}

					if (!current || dirty & /*dataDisplay, DataDisplay*/ 6 && button3_disabled_value !== (button3_disabled_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures)) {
						prop_dev(button3, "disabled", button3_disabled_value);
					}

					if (!current || dirty & /*dataDisplay, DataDisplay*/ 6 && button4_disabled_value !== (button4_disabled_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures)) {
						prop_dev(button4, "disabled", button4_disabled_value);
					}

					if (!current || dirty & /*dataDisplay, DataDisplay*/ 6 && button5_disabled_value !== (button5_disabled_value = /*dataDisplay*/ ctx[2] === /*DataDisplay*/ ctx[1].Measures)) {
						prop_dev(button5, "disabled", button5_disabled_value);
					}

					if (dirty & /*selectedIdx, dataDisplay, DataDisplay, sensors, numberOfVisiblePoints, charts*/ 559) {
						each_value = /*sensors*/ ctx[0];
						validate_each_argument(each_value);
						let i;

						for (i = 0; i < each_value.length; i += 1) {
							const child_ctx = get_each_context(ctx, each_value, i);

							if (each_blocks[i]) {
								each_blocks[i].p(child_ctx, dirty);
								transition_in(each_blocks[i], 1);
							} else {
								each_blocks[i] = create_each_block(child_ctx);
								each_blocks[i].c();
								transition_in(each_blocks[i], 1);
								each_blocks[i].m(div5, t11);
							}
						}

						group_outros();

						for (i = each_value.length; i < each_blocks.length; i += 1) {
							out_1(i);
						}

						check_outros();
					}

					const sensorstable_changes = {};
					if (dirty & /*tableHeader*/ 256) sensorstable_changes.headers = /*tableHeader*/ ctx[8];
					sensorstable.$set(sensorstable_changes);
				},
				i: function intro(local) {
					if (current) return;

					for (let i = 0; i < each_value_1.length; i += 1) {
						transition_in(each_blocks_1[i]);
					}

					for (let i = 0; i < each_value.length; i += 1) {
						transition_in(each_blocks[i]);
					}

					transition_in(sensorstable.$$.fragment, local);
					current = true;
				},
				o: function outro(local) {
					each_blocks_1 = each_blocks_1.filter(Boolean);

					for (let i = 0; i < each_blocks_1.length; i += 1) {
						transition_out(each_blocks_1[i]);
					}

					each_blocks = each_blocks.filter(Boolean);

					for (let i = 0; i < each_blocks.length; i += 1) {
						transition_out(each_blocks[i]);
					}

					transition_out(sensorstable.$$.fragment, local);
					current = false;
				},
				d: function destroy(detaching) {
					if (detaching) detach_dev(t0);
					if (detaching) detach_dev(div7);
					destroy_each(each_blocks_1, detaching);
					destroy_each(each_blocks, detaching);
					/*sensorstable_binding*/ ctx[17](null);
					destroy_component(sensorstable);
					mounted = false;
					run_all(dispose);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_fragment$1.name,
				type: "component",
				source: "",
				ctx
			});

			return block;
		}

		const intervalMs = 250;
		const experimentTimeSeconds = 60;

		function instance$1($$self, $$props, $$invalidate) {
			let tableHeader;
			let { $$slots: slots = {}, $$scope } = $$props;
			validate_slots('Dashboard', slots, []);
			var DataDisplay;

			(function (DataDisplay) {
				DataDisplay[DataDisplay["Graphics"] = 0] = "Graphics";
				DataDisplay[DataDisplay["Measures"] = 1] = "Measures";
			})(DataDisplay || (DataDisplay = {}));

			const numberOfVisiblePoints = 1000 / intervalMs * experimentTimeSeconds;
			let { sensors = [] } = $$props;

			// Internal
			let value = 10;

			let dataDisplay = DataDisplay.Measures;
			let selectedIdx = 0;
			let paused = false;
			let charts = [];
			let table = undefined;
			const values = [];

			onMount(() => {
				let timer = 0;

				const interval = setInterval(
						() => {
							for (let i = 0; i < sensors.length; i++) {
								const newValue = sensors[i].getLastValue();
								if (newValue == null) $$invalidate(7, values[i] = strings.noData, values); else $$invalidate(7, values[i] = newValue, values);
								charts[i].addData({ time: timer, value: newValue });
							}

							table.addRow([msToString(timer), ...values]);
							timer += intervalMs;
						},
						intervalMs,
						true
				);

				return () => {
					clearInterval(interval);
				};
			});

			function setPause(isPaused) {
				$$invalidate(4, paused = isPaused);

				if (paused) {
					charts.forEach(c => c.pause());
					table.pause();
				} else {
					charts.forEach(c => c.start());
					table.start();
				}
			}

			function toggleMeasureGraphics() {
				$$invalidate(2, dataDisplay = dataDisplay === DataDisplay.Measures
						? DataDisplay.Graphics
						: DataDisplay.Measures);
			}

			function selectSensor(idx) {
				$$invalidate(3, selectedIdx = idx);
				$$invalidate(2, dataDisplay = DataDisplay.Graphics);
			}

			const writable_props = ['sensors'];

			Object.keys($$props).forEach(key => {
				if (!~writable_props.indexOf(key) && key.slice(0, 2) !== '$$' && key !== 'slot') console.warn(`<Dashboard> was created with unknown prop '${key}'`);
			});

			const click_handler = i => selectSensor(i);
			const applyMinMax_handler = (i, { detail: { min, max } }) => charts[i].applyMinMax(min, max);
			const click_handler_1 = () => setPause(!paused);

			function sensorchart_binding($$value, i) {
				binding_callbacks[$$value ? 'unshift' : 'push'](() => {
					charts[i] = $$value;
					$$invalidate(5, charts);
				});
			}

			function sensorstable_binding($$value) {
				binding_callbacks[$$value ? 'unshift' : 'push'](() => {
					table = $$value;
					$$invalidate(6, table);
				});
			}

			$$self.$$set = $$props => {
				if ('sensors' in $$props) $$invalidate(0, sensors = $$props.sensors);
			};

			$$self.$capture_state = () => ({
				strings,
				SidebarSensor,
				onMount,
				SensorsTable,
				msToString,
				SensorChart,
				DataDisplay,
				intervalMs,
				experimentTimeSeconds,
				numberOfVisiblePoints,
				sensors,
				value,
				dataDisplay,
				selectedIdx,
				paused,
				charts,
				table,
				values,
				setPause,
				toggleMeasureGraphics,
				selectSensor,
				tableHeader
			});

			$$self.$inject_state = $$props => {
				if ('DataDisplay' in $$props) $$invalidate(1, DataDisplay = $$props.DataDisplay);
				if ('sensors' in $$props) $$invalidate(0, sensors = $$props.sensors);
				if ('value' in $$props) value = $$props.value;
				if ('dataDisplay' in $$props) $$invalidate(2, dataDisplay = $$props.dataDisplay);
				if ('selectedIdx' in $$props) $$invalidate(3, selectedIdx = $$props.selectedIdx);
				if ('paused' in $$props) $$invalidate(4, paused = $$props.paused);
				if ('charts' in $$props) $$invalidate(5, charts = $$props.charts);
				if ('table' in $$props) $$invalidate(6, table = $$props.table);
				if ('tableHeader' in $$props) $$invalidate(8, tableHeader = $$props.tableHeader);
			};

			if ($$props && "$$inject" in $$props) {
				$$self.$inject_state($$props.$$inject);
			}

			$$self.$$.update = () => {
				if ($$self.$$.dirty & /*sensors*/ 1) {
					$$invalidate(8, tableHeader = [
						`${strings.time} [${strings.timeFormat}]`,
						...sensors.map(s => `${s.name} [${s.mode.unit}]`)
					]);
				}
			};

			return [
				sensors,
				DataDisplay,
				dataDisplay,
				selectedIdx,
				paused,
				charts,
				table,
				values,
				tableHeader,
				numberOfVisiblePoints,
				setPause,
				toggleMeasureGraphics,
				selectSensor,
				click_handler,
				applyMinMax_handler,
				click_handler_1,
				sensorchart_binding,
				sensorstable_binding
			];
		}

		class Dashboard extends SvelteComponentDev {
			constructor(options) {
				super(options);
				init(this, options, instance$1, create_fragment$1, safe_not_equal, { sensors: 0 });

				dispatch_dev("SvelteRegisterComponent", {
					component: this,
					tagName: "Dashboard",
					options,
					id: create_fragment$1.name
				});
			}

			get sensors() {
				throw new Error("<Dashboard>: Props cannot be read directly from the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}

			set sensors(value) {
				throw new Error("<Dashboard>: Props cannot be set directly on the component instance unless compiling with 'accessors: true' or '<svelte:options accessors/>'");
			}
		}

		var LabType;
		(function (LabType) {
			LabType[LabType["None"] = 0] = "None";
			LabType[LabType["Phys"] = 1] = "Phys";
			LabType[LabType["Chem"] = 2] = "Chem";
			LabType[LabType["Eco"] = 3] = "Eco";
			LabType[LabType["Bio"] = 4] = "Bio";
		})(LabType || (LabType = {}));

		class ReadSettingsException extends Error {
			constructor(message = strings.readSettingsError) {
				super(message);
			}
		}

		class Lab {
			constructor(repository) {
				this.repository = repository;
				this.values = new Map();
				this.sensors = [];
				this.isStopped = true;
				this.lastRawValues = undefined;
			}
			async init() {
				this.factorySettings = await this.repository.getFactorySettings();
				this.userSettings = await this.repository.getUserSettings();
				const sensorValues = await this.repository.getSensorsValuesAsync();
				if (this.factorySettings == null || this.userSettings == null)
					throw new ReadSettingsException();
				this.sensors = this.availableSensors.map(sensorType => new Sensor(this, sensorType));
				this.parseAndUpdateValues(sensorValues);
				return this;
			}
			getSensors() {
				return this.sensors;
			}
			updateValues() {
				const rawValues = this.repository.getLastSensorsValues();
				if (rawValues == null || rawValues == this.lastRawValues) {
					this.values.forEach((value, key, map) => {
						map.set(key, null);
					});
					return;
				}
				this.lastRawValues = rawValues;
				this.parseAndUpdateValues(rawValues);
			}
			getValue(sensorType) {
				var _a;
				return (_a = this.values.get(sensorType)) !== null && _a !== void 0 ? _a : null;
			}
			setMode(sensorType, modeIdx) {
			}
			;
			getMode(sensorType) {
				return undefined;
			}
			;
			async start() {
				await this.repository.start();
				this.isStopped = false;
				this.interval = self.setInterval(() => this.updateValues(), 250);
			}
			async stop() {
				self.clearInterval(this.interval);
				this.isStopped = true;
				await this.repository.stop();
			}
		}

		const defaultCoefficients = {
			factoryK: 1,
			factoryD: 0,
			userK: 1,
			userD: 0,
		};
		function applyCoefficients(value, coefficients) {
			const coefs = Object.assign(Object.assign({}, defaultCoefficients), coefficients);
			const factory = value * coefs.factoryK + coefs.factoryD;
			return factory * coefs.userK + coefs.userD;
		}

		class BioLab extends Lab {
			constructor(repository) {
				super(repository);
				this.availableSensors = [
					SensorType.TempSensor,
					SensorType.PhSensor,
					SensorType.HumiditySensor,
					SensorType.LightSensor,
					SensorType.TempOutsideSensor,
				];
			}
			get labType() {
				return LabType.Bio;
			}
			;
			parseAndUpdateValues(rawValues) {
				const tempSensor = rawValues.channel2;
				const tempK = tempSensor < this.factorySettings.pointT_Channel2
						? this.factorySettings.k1_Channel2
						: this.factorySettings.k2_Channel2;
				const tempD = tempSensor < this.factorySettings.pointT_Channel2
						? this.factorySettings.delta1_Channel2
						: this.factorySettings.delta2_Channel2;
				this.values.set(SensorType.TempSensor, applyCoefficients(rawValues.channel2, {
					factoryK: tempK,
					factoryD: tempD,
					userK: this.userSettings.k_TempSensor,
					userD: this.userSettings.delta_TempSensor,
				}));
				this.values.set(SensorType.PhSensor, applyCoefficients(rawValues.channel0, {
					factoryK: this.factorySettings.k_Channel0,
					factoryD: this.factorySettings.delta_Channel0,
					userK: this.userSettings.delta_pHSensor,
					userD: this.userSettings.k_pHSensor,
				}));
				this.values.set(SensorType.HumiditySensor, applyCoefficients(rawValues.humidity, {
					factoryK: 0.01,
					factoryD: this.factorySettings.delta_HumiditySensor,
					userD: this.userSettings.delta_HumiditySensor
				}));
				this.values.set(SensorType.LightSensor, applyCoefficients(rawValues.light, {
					factoryD: this.factorySettings.delta_LightSensor,
					userD: this.userSettings.delta_LightSensor
				}));
				this.values.set(SensorType.TempOutsideSensor, applyCoefficients(rawValues.tempADC, {
					factoryK: 0.01,
					factoryD: this.factorySettings.delta_TempOutsideSensor,
					userD: this.userSettings.delta_TempOutsideSensor
				}));
			}
		}

		class EcoLab extends Lab {
			constructor(repository) {
				super(repository);
				this.availableSensors = [];
			}
			get labType() { return LabType.Eco; }
			;
			parseAndUpdateValues(values) {
			}
		}

		var ConductometerMode;
		(function (ConductometerMode) {
			ConductometerMode[ConductometerMode["K0"] = 0] = "K0";
			ConductometerMode[ConductometerMode["K1"] = 1] = "K1";
			ConductometerMode[ConductometerMode["K10"] = 2] = "K10";
			ConductometerMode[ConductometerMode["K100"] = 3] = "K100";
		})(ConductometerMode || (ConductometerMode = {}));

		class ChemLab extends Lab {
			constructor(repository) {
				super(repository);
				this.availableSensors = [
					SensorType.TempSensor,
					SensorType.PhSensor,
					SensorType.ElectricalConductivitySensor,
				];
			}
			get labType() { return LabType.Chem; }
			;
			parseAndUpdateValues(rawValues) {
				const tempSensor = rawValues.channel2;
				const tempK = tempSensor < this.factorySettings.pointT_Channel2
						? this.factorySettings.k1_Channel2
						: this.factorySettings.k2_Channel2;
				const tempD = tempSensor < this.factorySettings.pointT_Channel2
						? this.factorySettings.delta1_Channel2
						: this.factorySettings.delta2_Channel2;
				this.values.set(SensorType.TempSensor, applyCoefficients(rawValues.channel2, {
					factoryK: tempK,
					factoryD: tempD,
					userK: this.userSettings.k_TempSensor,
					userD: this.userSettings.delta_TempSensor,
				}));
				this.values.set(SensorType.PhSensor, applyCoefficients(rawValues.channel0, {
					factoryK: this.factorySettings.k_Channel0,
					factoryD: this.factorySettings.delta_Channel0,
					userK: this.userSettings.delta_pHSensor,
					userD: this.userSettings.k_pHSensor,
				}));
				let factConductivityK = 1;
				let factConductivityDelta = 0;
				let userConductivityK = 1;
				let userConductivityDelta = 0;
				this.conductometerMode = rawValues.conductometerMode;
				switch (rawValues.conductometerMode) {
					case ConductometerMode.K1:
						factConductivityK = this.factorySettings.k1_Channel3;
						factConductivityDelta = this.factorySettings.delta1_Channel3;
						userConductivityK = this.userSettings.k1_ConductivitySensor;
						userConductivityDelta = this.userSettings.delta1_ConductivitySensor;
						break;
					case ConductometerMode.K10:
						factConductivityK = this.factorySettings.k2_Channel3;
						factConductivityDelta = this.factorySettings.delta2_Channel3;
						userConductivityK = this.userSettings.k2_ConductivitySensor;
						userConductivityDelta = this.userSettings.delta2_ConductivitySensor;
						break;
					case ConductometerMode.K100:
						factConductivityK = this.factorySettings.k3_Channel3;
						factConductivityDelta = this.factorySettings.delta3_Channel3;
						userConductivityK = this.userSettings.k3_ConductivitySensor;
						userConductivityDelta = this.userSettings.delta3_ConductivitySensor;
						break;
				}
				this.values.set(SensorType.ElectricalConductivitySensor, applyCoefficients(rawValues.channel3, {
					factoryD: factConductivityDelta,
					factoryK: factConductivityK,
					userK: userConductivityK,
					userD: userConductivityDelta,
				}));
			}
			setMode(sensorType, modeIdx) {
				// TODO: implement set conductivity mode
			}
			getMode(sensorType) {
				switch (sensorType) {
					case (SensorType.ElectricalConductivitySensor):
						return this.conductometerMode;
				}
				return undefined;
			}
		}

		var AccelerometerMode;
		(function (AccelerometerMode) {
			AccelerometerMode[AccelerometerMode["M2G"] = 0] = "M2G";
			AccelerometerMode[AccelerometerMode["M4G"] = 1] = "M4G";
			AccelerometerMode[AccelerometerMode["M8G"] = 2] = "M8G";
			AccelerometerMode[AccelerometerMode["M16G"] = 3] = "M16G";
		})(AccelerometerMode || (AccelerometerMode = {}));

		class PhysicsLab extends Lab {
			constructor(repository) {
				super(repository);
				this.availableSensors = [
					SensorType.TempSensor,
					SensorType.AbsolutePressureSensor,
					SensorType.TeslameterSensor,
					SensorType.VoltmeterSensor,
					SensorType.AmpermetrSensor,
					SensorType.AccelerometerXSensor,
					SensorType.AccelerometerYSensor,
					SensorType.AccelerometerZSensor,
				];
			}
			get labType() { return LabType.Eco; }
			;
			parseAndUpdateValues(rawValues) {
				const tempSensor = rawValues.channel2;
				const tempK = tempSensor < this.factorySettings.pointT_Channel2
						? this.factorySettings.k1_Channel2
						: this.factorySettings.k2_Channel2;
				const tempD = tempSensor < this.factorySettings.pointT_Channel2
						? this.factorySettings.delta1_Channel2
						: this.factorySettings.delta2_Channel2;
				this.values.set(SensorType.TempSensor, applyCoefficients(rawValues.channel2, {
					factoryK: tempK,
					factoryD: tempD,
					userK: this.userSettings.k_TempSensor,
					userD: this.userSettings.delta_TempSensor,
				}));
				this.values.set(SensorType.AbsolutePressureSensor, applyCoefficients(rawValues.pressure, {
					factoryD: this.factorySettings.delta_AbsolutePressureSensor,
					factoryK: 0.1,
					userD: this.userSettings.delta_AbsolutePressureSensor
				}));
				this.values.set(SensorType.TeslameterSensor, applyCoefficients(rawValues.channel3, {
					factoryK: this.factorySettings.k_Channel0,
					factoryD: this.factorySettings.delta_Channel0,
					userK: this.userSettings.k_TeslametrSensor,
					userD: this.userSettings.delta_TeslametrSensor
				}));
				this.values.set(SensorType.VoltmeterSensor, applyCoefficients(rawValues.channel0, {
					factoryK: this.factorySettings.k_Channel0,
					factoryD: this.factorySettings.delta_Channel0,
					userK: this.userSettings.k_VoltmeterSensor,
					userD: this.userSettings.delta_VoltmeterSensor,
				}));
				this.values.set(SensorType.AmpermetrSensor, applyCoefficients(rawValues.channel1, {
					factoryK: this.factorySettings.k_Channel1,
					factoryD: this.factorySettings.delta_Channel1,
					userK: this.userSettings.k_AmpermetrSensor,
					userD: this.userSettings.delta_AmpermetrSensor
				}));
				this.accelerometerMode = rawValues.accelerometerMode;
				const accelerometrMultiplyer = PhysicsLab.getAcceleometerMultiplyer(rawValues.accelerometerMode);
				this.values.set(SensorType.AccelerometerXSensor, rawValues.accelerometerX * accelerometrMultiplyer);
				this.values.set(SensorType.AccelerometerYSensor, rawValues.accelerometerY * accelerometrMultiplyer);
				this.values.set(SensorType.AccelerometerZSensor, rawValues.accelerometerZ * accelerometrMultiplyer);
			}
			static getAcceleometerMultiplyer(accelerometerMode) {
				switch (accelerometerMode) {
					case (AccelerometerMode.M2G):
						return 0.064 * 0.001;
					case (AccelerometerMode.M4G):
						return 0.128 * 0.001;
					case (AccelerometerMode.M8G):
						return 0.256 * 0.001;
					case (AccelerometerMode.M16G):
						return 0.512 * 0.001;
					default:
						return 0.064 * 0.001;
				}
			}
			setMode(sensorType, modeIdx) {
				// TODO: implement accelerometer mode
			}
			getMode(sensorType) {
				switch (sensorType) {
					case (SensorType.AccelerometerXSensor):
					case (SensorType.AccelerometerYSensor):
					case (SensorType.AccelerometerZSensor):
						return this.accelerometerMode;
				}
			}
		}

		class LabFactory {
			static async create(labRepository) {
				const labType = await labRepository.getLabType();
				switch (labType) {
					case (LabType.Phys):
						return await new PhysicsLab(labRepository).init();
					case (LabType.Chem):
						return await new ChemLab(labRepository).init();
					case (LabType.Eco):
						return await new EcoLab(labRepository).init();
					case (LabType.Bio):
						return await new BioLab(labRepository).init();
					default: throw new RangeError();
				}
			}
		}

		var Status;
		(function (Status) {
			Status[Status["Error"] = 0] = "Error";
			Status[Status["Ok"] = 1] = "Ok";
		})(Status || (Status = {}));

		class BitConverter {
			static ToSingle(buffer, index) {
				return new Float32Array(buffer, index, 1)[0];
			}
			static ToInt16(buffer, index) {
				return new Int16Array(buffer, index)[0];
			}
			static ToUInt16(buffer, index) {
				return new Uint16Array(buffer, index)[0];
			}
			static ToUInt32(buffer, index) {
				return new Uint32Array(buffer, index)[0];
			}
			static GetBytes(integer) {
				const buffer = new Int8Array(4);
				for (let i = 0; i < 4; i++) {
					buffer[i] = (integer >> (i * 8) & 255);
				}
				return buffer;
			}
		}

		const crctab16 = new Uint16Array([
			0X0000, 0X1189, 0X2312, 0X329B, 0X4624, 0X57AD, 0X6536, 0X74BF,
			0X8C48, 0X9DC1, 0XAF5A, 0XBED3, 0XCA6C, 0XDBE5, 0XE97E, 0XF8F7,
			0X1081, 0X0108, 0X3393, 0X221A, 0X56A5, 0X472C, 0X75B7, 0X643E,
			0X9CC9, 0X8D40, 0XBFDB, 0XAE52, 0XDAED, 0XCB64, 0XF9FF, 0XE876,
			0X2102, 0X308B, 0X0210, 0X1399, 0X6726, 0X76AF, 0X4434, 0X55BD,
			0XAD4A, 0XBCC3, 0X8E58, 0X9FD1, 0XEB6E, 0XFAE7, 0XC87C, 0XD9F5,
			0X3183, 0X200A, 0X1291, 0X0318, 0X77A7, 0X662E, 0X54B5, 0X453C,
			0XBDCB, 0XAC42, 0X9ED9, 0X8F50, 0XFBEF, 0XEA66, 0XD8FD, 0XC974,
			0X4204, 0X538D, 0X6116, 0X709F, 0X0420, 0X15A9, 0X2732, 0X36BB,
			0XCE4C, 0XDFC5, 0XED5E, 0XFCD7, 0X8868, 0X99E1, 0XAB7A, 0XBAF3,
			0X5285, 0X430C, 0X7197, 0X601E, 0X14A1, 0X0528, 0X37B3, 0X263A,
			0XDECD, 0XCF44, 0XFDDF, 0XEC56, 0X98E9, 0X8960, 0XBBFB, 0XAA72,
			0X6306, 0X728F, 0X4014, 0X519D, 0X2522, 0X34AB, 0X0630, 0X17B9,
			0XEF4E, 0XFEC7, 0XCC5C, 0XDDD5, 0XA96A, 0XB8E3, 0X8A78, 0X9BF1,
			0X7387, 0X620E, 0X5095, 0X411C, 0X35A3, 0X242A, 0X16B1, 0X0738,
			0XFFCF, 0XEE46, 0XDCDD, 0XCD54, 0XB9EB, 0XA862, 0X9AF9, 0X8B70,
			0X8408, 0X9581, 0XA71A, 0XB693, 0XC22C, 0XD3A5, 0XE13E, 0XF0B7,
			0X0840, 0X19C9, 0X2B52, 0X3ADB, 0X4E64, 0X5FED, 0X6D76, 0X7CFF,
			0X9489, 0X8500, 0XB79B, 0XA612, 0XD2AD, 0XC324, 0XF1BF, 0XE036,
			0X18C1, 0X0948, 0X3BD3, 0X2A5A, 0X5EE5, 0X4F6C, 0X7DF7, 0X6C7E,
			0XA50A, 0XB483, 0X8618, 0X9791, 0XE32E, 0XF2A7, 0XC03C, 0XD1B5,
			0X2942, 0X38CB, 0X0A50, 0X1BD9, 0X6F66, 0X7EEF, 0X4C74, 0X5DFD,
			0XB58B, 0XA402, 0X9699, 0X8710, 0XF3AF, 0XE226, 0XD0BD, 0XC134,
			0X39C3, 0X284A, 0X1AD1, 0X0B58, 0X7FE7, 0X6E6E, 0X5CF5, 0X4D7C,
			0XC60C, 0XD785, 0XE51E, 0XF497, 0X8028, 0X91A1, 0XA33A, 0XB2B3,
			0X4A44, 0X5BCD, 0X6956, 0X78DF, 0X0C60, 0X1DE9, 0X2F72, 0X3EFB,
			0XD68D, 0XC704, 0XF59F, 0XE416, 0X90A9, 0X8120, 0XB3BB, 0XA232,
			0X5AC5, 0X4B4C, 0X79D7, 0X685E, 0X1CE1, 0X0D68, 0X3FF3, 0X2E7A,
			0XE70E, 0XF687, 0XC41C, 0XD595, 0XA12A, 0XB0A3, 0X8238, 0X93B1,
			0X6B46, 0X7ACF, 0X4854, 0X59DD, 0X2D62, 0X3CEB, 0X0E70, 0X1FF9,
			0XF78F, 0XE606, 0XD49D, 0XC514, 0XB1AB, 0XA022, 0X92B9, 0X8330,
			0X7BC7, 0X6A4E, 0X58D5, 0X495C, 0X3DE3, 0X2C6A, 0X1EF1, 0X0F78,
		]);
		/**
		 * Calculate the 16-bit CRC of data with predetermined length.
		 * @param data array of bytes
		 */
		function crc16(data) {
			var res = 0x0ffff;
			const dataWrapper = new Int8Array(data);
			for (let b of dataWrapper) {
				res = ((res >> 8) & 0x0ff) ^ crctab16[(res ^ b) & 0xff];
			}
			const crc = (~res) & 0x0ffff;
			const result = new Int8Array(2);
			result[0] = crc & 0b11111111;
			result[1] = crc >> 8 & 0b11111111;
			return result;
		}

		class Commands {
			/**
			 * Get lab info command (mode, configs, type, etc.)
			 * @constructor
			 */
			static getInfo() {
				const writeMessage = new Int8Array(6);
				writeMessage[0] = this.startByte;
				writeMessage[1] = BitConverter.GetBytes(writeMessage.byteLength)[0];
				writeMessage[2] = BitConverter.GetBytes(writeMessage.byteLength)[1];
				writeMessage[3] = this.proto_msgType_getInfo;
				const crc = this.calculateMessageCrc16(writeMessage);
				writeMessage[4] = crc[0];
				writeMessage[5] = crc[1];
				return writeMessage;
			}
			/**
			 * Get read sensor values command
			 * @constructor
			 */
			static getSensorValues() {
				if (this._readSensorValuesMessage != undefined)
					return this._readSensorValuesMessage;
				const writeMessage = new Int8Array(6);
				writeMessage[0] = this.startByte;
				writeMessage[1] = BitConverter.GetBytes(writeMessage.byteLength)[0];
				writeMessage[2] = BitConverter.GetBytes(writeMessage.byteLength)[1];
				writeMessage[3] = this.data_exchange;
				const crc = this.calculateMessageCrc16(writeMessage);
				writeMessage[4] = crc[0];
				writeMessage[5] = crc[1];
				this._readSensorValuesMessage = writeMessage;
				return this._readSensorValuesMessage;
			}
			/**
			 * Get write scales (modes) of accelerometer and conductometer message
			 * @param accelScale
			 * @param conductScale
			 * @constructor
			 */
			static setScales(accelScale, conductScale) {
				const writeMessage = new Int8Array(8);
				writeMessage[0] = this.startByte;
				writeMessage[1] = BitConverter.GetBytes(writeMessage.byteLength)[0];
				writeMessage[2] = BitConverter.GetBytes(writeMessage.byteLength)[1];
				writeMessage[3] = this.data_exchange;
				writeMessage[4] = accelScale;
				writeMessage[5] = conductScale;
				const crc = this.calculateMessageCrc16(writeMessage);
				writeMessage[6] = crc[0];
				writeMessage[7] = crc[1];
				return writeMessage;
			}
			/**
			 * Get factory values message
			 * @constructor
			 */
			static getFactoryValues() {
				const writeMessage = new Int8Array(6);
				writeMessage[0] = this.startByte;
				writeMessage[1] = BitConverter.GetBytes(writeMessage.byteLength)[0];
				writeMessage[2] = BitConverter.GetBytes(writeMessage.byteLength)[1];
				writeMessage[3] = this.get_HW_Config;
				const crc = this.calculateMessageCrc16(writeMessage);
				writeMessage[4] = crc[0];
				writeMessage[5] = crc[1];
				return writeMessage;
			}
			/**
			 * Get user values message
			 * @param dataOffset
			 * @param dataLength
			 * @constructor
			 */
			static getUserSettings(dataOffset, dataLength) {
				const writeMessage = new Int8Array(8);
				writeMessage[0] = this.startByte;
				writeMessage[1] = BitConverter.GetBytes(writeMessage.byteLength)[0];
				writeMessage[2] = BitConverter.GetBytes(writeMessage.byteLength)[1];
				writeMessage[3] = this.get_UserData;
				writeMessage[4] = dataOffset;
				writeMessage[5] = dataLength;
				const crc = this.calculateMessageCrc16(writeMessage);
				writeMessage[6] = crc[0];
				writeMessage[7] = crc[1];
				return writeMessage;
			}
			static calculateMessageCrc16(bytes) {
				return crc16(bytes.slice(0, bytes.byteLength - 2));
			}
			static checkAnswer(answerArray) {
				if (answerArray.byteLength < 6)
					return false;
				const byteBuffer = new Int8Array(answerArray);
				const crc = this.calculateMessageCrc16(byteBuffer);
				return crc[0] == byteBuffer[byteBuffer.byteLength - 2] &&
						crc[1] == byteBuffer[byteBuffer.byteLength - 1];
			}
		}
		Commands.userDataLength = 108;
		Commands.unsupportMsg = 0xFF;
		Commands.startByte = 0xAA;
		Commands.data_exchange = 0x10;
		Commands.get_HW_Config = 0x31;
		Commands.get_UserData = 0x41;
		Commands.get_ArchiveBt = 0x22;
		Commands.set_UserData = 0x40;
		Commands.proto_msgType_getInfo = 0x00;
		Commands.archive_Control = 0x20;
		Commands.getArchive = 0x21;
		Commands.proto_msgType_bootloader_get_FW_Cfg = 0x83;

		class ResponseParser {
			/**
			 * Convert from byte to bit array
			 * @param byte
			 * @private
			 */
			static byteToBits(byte) {
				const bits = [];
				for (let i = 0; i < 8; i++) {
					bits[i] = (byte & (1 << i)) != 0;
				}
				return bits;
			}
			/**
			 * parse lab type
			 * @param buffer
			 */
			static parseLabType(buffer) {
				return new Int8Array(buffer)[10];
			}
			/**
			 * parse factory settings
			 * @param buffer
			 */
			static parseFactorySettings(buffer) {
				return {
					k_Channel0: BitConverter.ToSingle(buffer, 0),
					delta_Channel0: BitConverter.ToSingle(buffer, 4),
					k_Channel1: BitConverter.ToSingle(buffer, 8),
					delta_Channel1: BitConverter.ToSingle(buffer, 12),
					k1_Channel2: BitConverter.ToSingle(buffer, 16),
					delta1_Channel2: BitConverter.ToSingle(buffer, 20),
					k2_Channel2: BitConverter.ToSingle(buffer, 24),
					delta2_Channel2: BitConverter.ToSingle(buffer, 28),
					pointT_Channel2: BitConverter.ToSingle(buffer, 32),
					k1_Channel3: BitConverter.ToSingle(buffer, 36),
					delta1_Channel3: BitConverter.ToSingle(buffer, 40),
					delta_LightSensor: BitConverter.ToSingle(buffer, 44),
					delta_HumiditySensor: BitConverter.ToSingle(buffer, 48),
					delta_TempOutsideSensor: BitConverter.ToSingle(buffer, 52),
					delta_AbsolutePressureSensor: BitConverter.ToSingle(buffer, 56),
					k2_Channel3: BitConverter.ToSingle(buffer, 60),
					delta2_Channel3: BitConverter.ToSingle(buffer, 64),
					k3_Channel3: BitConverter.ToSingle(buffer, 68),
					delta3_Channel3: BitConverter.ToSingle(buffer, 72),
				};
			}
			/**
			 * parse factory settings when uses short messages
			 * @param buffer
			 */
			static parseFactorySettingsShortMessage(buffer) {
				return {
					k_Channel0: BitConverter.ToSingle(buffer, 8),
					delta_Channel0: BitConverter.ToSingle(buffer, 12),
					k_Channel1: BitConverter.ToSingle(buffer, 16),
					delta_Channel1: BitConverter.ToSingle(buffer, 20),
					k1_Channel2: BitConverter.ToSingle(buffer, 24),
					delta1_Channel2: BitConverter.ToSingle(buffer, 28),
					k2_Channel2: BitConverter.ToSingle(buffer, 32),
					delta2_Channel2: BitConverter.ToSingle(buffer, 36),
					pointT_Channel2: BitConverter.ToSingle(buffer, 40),
					k1_Channel3: BitConverter.ToSingle(buffer, 44),
					delta1_Channel3: BitConverter.ToSingle(buffer, 48),
					delta_LightSensor: BitConverter.ToSingle(buffer, 52),
					delta_HumiditySensor: BitConverter.ToSingle(buffer, 56),
					delta_TempOutsideSensor: BitConverter.ToSingle(buffer, 60),
					delta_AbsolutePressureSensor: BitConverter.ToSingle(buffer, 64),
					k2_Channel3: BitConverter.ToSingle(buffer, 68),
					delta2_Channel3: BitConverter.ToSingle(buffer, 72),
					k3_Channel3: BitConverter.ToSingle(buffer, 76),
					delta3_Channel3: BitConverter.ToSingle(buffer, 80),
				};
			}
			/**
			 * parse user settings
			 * @param labType
			 * @param buffer
			 */
			static parseUserSettings(labType, buffer) {
				const settings = {};
				switch (labType) {
					case LabType.Phys:
						settings.k_TempSensor = BitConverter.ToSingle(buffer, 0);
						settings.delta_TempSensor = BitConverter.ToSingle(buffer, 4);
						settings.k_TeslametrSensor = BitConverter.ToSingle(buffer, 12);
						settings.delta_TeslametrSensor = BitConverter.ToSingle(buffer, 16);
						settings.k_VoltmeterSensor = BitConverter.ToSingle(buffer, 24);
						settings.delta_VoltmeterSensor = BitConverter.ToSingle(buffer, 28);
						settings.k_AmpermetrSensor = BitConverter.ToSingle(buffer, 36);
						settings.delta_AmpermetrSensor = BitConverter.ToSingle(buffer, 40);
						settings.delta_AbsolutePressureSensor = BitConverter.ToSingle(buffer, 48);
						break;
					case LabType.Chem:
						settings.k_pHSensor = BitConverter.ToSingle(buffer, 0);
						settings.delta_pHSensor = BitConverter.ToSingle(buffer, 4);
						settings.k_TempSensor = BitConverter.ToSingle(buffer, 12);
						settings.delta_TempSensor = BitConverter.ToSingle(buffer, 16);
						settings.k1_ConductivitySensor = BitConverter.ToSingle(buffer, 24);
						settings.delta1_ConductivitySensor = BitConverter.ToSingle(buffer, 28);
						settings.k2_ConductivitySensor = BitConverter.ToSingle(buffer, 32);
						settings.delta2_ConductivitySensor = BitConverter.ToSingle(buffer, 46);
						settings.k3_ConductivitySensor = BitConverter.ToSingle(buffer, 40);
						settings.delta3_ConductivitySensor = BitConverter.ToSingle(buffer, 44);
						break;
					case LabType.Eco:
						// TODO: Add eco lab
						break;
					case LabType.Bio:
						settings.k_pHSensor = BitConverter.ToSingle(buffer, 0);
						settings.delta_pHSensor = BitConverter.ToSingle(buffer, 4);
						settings.k_TempSensor = BitConverter.ToSingle(buffer, 12);
						settings.delta_TempSensor = BitConverter.ToSingle(buffer, 16);
						settings.delta_TempOutsideSensor = BitConverter.ToSingle(buffer, 24);
						settings.delta_HumiditySensor = BitConverter.ToSingle(buffer, 28);
						settings.delta_LightSensor = BitConverter.ToSingle(buffer, 32);
						break;
				}
				return settings;
			}
			/**
			 * parse sensors values
			 * @param buffer
			 * @constructor
			 */
			static ParseRawValues(buffer) {
				const byteBuffer = new Int8Array(buffer);
				const state = this.byteToBits(byteBuffer[4]);
				return {
					pressureOk: state[3],
					humidityOk: state[2],
					lightOk: state[1],
					accelerometerOk: state[0],
					conductometerMode: byteBuffer[5],
					tempADC: BitConverter.ToInt16(buffer, 12) * 0.01,
					channel0: BitConverter.ToSingle(buffer, 16),
					channel1: BitConverter.ToSingle(buffer, 20),
					channel2: BitConverter.ToSingle(buffer, 24),
					channel3: BitConverter.ToSingle(buffer, 28),
					accelerometerX: BitConverter.ToInt16(buffer, 32),
					accelerometerY: BitConverter.ToInt16(buffer, 34),
					accelerometerZ: BitConverter.ToInt16(buffer, 36),
					accelerometerMode: byteBuffer[38],
					light: BitConverter.ToSingle(buffer, 40),
					humidity: BitConverter.ToUInt16(buffer, 44) * 0.01,
					pressure: BitConverter.ToSingle(buffer, 48),
				};
			}
			/**
			 * parse a serial number
			 * @param buffer
			 * @constructor
			 */
			static Answer_proto_msgType_bootloader_get_FW_Cfg(buffer) {
				return BitConverter.ToUInt32(buffer, 4);
			}
		}

		function fetchGet(url) {
			return fetch(url);
		}

		const apiBase = new URL(window.location.origin + '/api/lab/');
		class WebSocketLabRepository {
			constructor(serialNumber) {
				this.serialNumber = serialNumber;
				this.socketIsActive = false;
			}
			async start() {
				return new Promise((resolve, reject) => {
					if (this.socket)
						return;
					apiBase.protocol = "wss";
					apiBase.pathname += 'subscribe/' + this.serialNumber;
					this.socket = new WebSocket(apiBase);
					this.socket.onopen = () => {
						this.socketIsActive = true;
						resolve();
					};
					this.socket.onerror = () => reject(null);
					this.socket.onmessage = (ev) => this.onMessage(ev);
					this.socket.onclose = () => this.onSocketClose();
				});
			}
			async stop() {
				if (!this.socket)
					return;
				this.socket.close();
				this.socket.onmessage = null;
				this.socket = undefined;
				this.socketIsActive = false;
			}
			async getFactorySettings() {
				try {
					const result = await fetchGet(apiBase + 'factory-settings/' + this.serialNumber);
					if (result.ok == false)
						return Promise.reject(result.status);
					const response = await result.json();
					return response;
				}
				catch (e) {
					return Promise.reject(e);
				}
			}
			async getLabType() {
				try {
					const result = await fetchGet(apiBase + 'lab-type/' + this.serialNumber);
					console.log(result);
					if (result.ok == false)
						return Promise.reject(result.status);
					const response = await result.text();
					const labType = Number(response);
					if (isNaN(labType))
						return LabType.None;
					return labType;
				}
				catch (e) {
					return Promise.reject(e);
				}
			}
			getLastSensorsValues() {
				if (!this.socketIsActive)
					return {};
				return this.rawValues;
			}
			async getUserSettings() {
				try {
					const result = await fetchGet(apiBase + 'user-settings/' + this.serialNumber);
					if (result.ok == false)
						return Promise.reject(result.status);
					const response = await result.json();
					return response;
				}
				catch (e) {
					return Promise.reject(e);
				}
			}
			async setSensorModes(accelerometerMode, conductometerMode) {
				try {
					const command = Commands.getSensorValues();
					await this.sendCommand(command);
					return true;
				}
				catch (e) {
					return Promise.reject(e);
				}
			}
			async sendCommand(request) {
				try {
					const result = await fetch(apiBase + 'send-command/' + this.serialNumber, {
						body: request,
						method: "POST",
					});
					if (result.ok == false)
						return Promise.reject(result.status);
					const response = await result.arrayBuffer();
					return response;
				}
				catch (e) {
					return Promise.reject(e);
				}
			}
			async onMessage(event) {
				const data = event.data;
				this.rawValues = ResponseParser.ParseRawValues(await data.arrayBuffer());
			}
			onSocketClose() {
				if (!this.socketIsActive)
					return;
				this.socketIsActive = false;
				this.start()
						.catch(() => {
							this.errorOccurred = true;
							this.errorMessage = strings.server_not_responding;
						});
			}
			async getSensorsValuesAsync() {
				const byteValues = await this.sendCommand(Commands.getSensorValues());
				if (!byteValues)
					return {};
				return ResponseParser.ParseRawValues(byteValues);
			}
		}

		/* src\App.svelte generated by Svelte v3.48.0 */
		const file = "src\\App.svelte";

		function create_fragment(ctx) {
			let main;
			let dashboard;
			let current;

			dashboard = new Dashboard({
				props: { sensors: /*sensors*/ ctx[0] },
				$$inline: true
			});

			const block = {
				c: function create() {
					main = element("main");
					create_component(dashboard.$$.fragment);
					add_location(main, file, 14, 0, 470);
				},
				l: function claim(nodes) {
					throw new Error("options.hydrate only works if the component was compiled with the `hydratable: true` option");
				},
				m: function mount(target, anchor) {
					insert_dev(target, main, anchor);
					mount_component(dashboard, main, null);
					current = true;
				},
				p: function update(ctx, [dirty]) {
					const dashboard_changes = {};
					if (dirty & /*sensors*/ 1) dashboard_changes.sensors = /*sensors*/ ctx[0];
					dashboard.$set(dashboard_changes);
				},
				i: function intro(local) {
					if (current) return;
					transition_in(dashboard.$$.fragment, local);
					current = true;
				},
				o: function outro(local) {
					transition_out(dashboard.$$.fragment, local);
					current = false;
				},
				d: function destroy(detaching) {
					if (detaching) detach_dev(main);
					destroy_component(dashboard);
				}
			};

			dispatch_dev("SvelteRegisterBlock", {
				block,
				id: create_fragment.name,
				type: "component",
				source: "",
				ctx
			});

			return block;
		}

		function instance($$self, $$props, $$invalidate) {
			let { $$slots: slots = {}, $$scope } = $$props;
			validate_slots('App', slots, []);
			let sensors = [];
			const labRpo = new WebSocketLabRepository("lab");

			LabFactory.create(labRpo).then(lab => {
				lab.start().then(() => {
					$$invalidate(0, sensors = lab.getSensors());
				});
			});

			const writable_props = [];

			Object.keys($$props).forEach(key => {
				if (!~writable_props.indexOf(key) && key.slice(0, 2) !== '$$' && key !== 'slot') console.warn(`<App> was created with unknown prop '${key}'`);
			});

			$$self.$capture_state = () => ({
				Dashboard,
				LabFactory,
				WebSocketLabRepository,
				sensors,
				labRpo
			});

			$$self.$inject_state = $$props => {
				if ('sensors' in $$props) $$invalidate(0, sensors = $$props.sensors);
			};

			if ($$props && "$$inject" in $$props) {
				$$self.$inject_state($$props.$$inject);
			}

			return [sensors];
		}

		class App extends SvelteComponentDev {
			constructor(options) {
				super(options);
				init(this, options, instance, create_fragment, safe_not_equal, {});

				dispatch_dev("SvelteRegisterComponent", {
					component: this,
					tagName: "App",
					options,
					id: create_fragment.name
				});
			}
		}

		const app = new App({
			target: document.body
		});

		return app;

	})();
</script>
</html> 



)=====";
#endif //__WEB_H__

