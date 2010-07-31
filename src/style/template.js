setTimeout(function() {
    var style = document.getElementById("arora-mini-style-css");
    if (! style) {
        style = document.createElement("style");
        style.type = "text/css";
        style.id = "arora-mini-style-css";
        style.className = "width-%%width%%";
        style.innerHTML = '%%style%%';
        document.getElementsByTagName("head")[0].appendChild(style);
    } else if (style.className != "width-%%width") {
        style.innerHTML = '%%style%%';
    }
}, Math.random() * 2000);
