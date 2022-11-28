export class Gui {
    constructor() {
    }

    configureEditor() {
        //EDITOR CODE MIRROR
        this.editor = CodeMirror.fromTextArea(document.getElementById("source"), {
            lineNumbers: true,
            matchBrackets: true,
            mode: "text/x-csharp"
        });

        this.output = CodeMirror.fromTextArea(document.getElementById("output"), {
            lineNumbers: true,
            matchBrackets: true,
            readOnly: true,
            mode: "text/x-csharp"
        });
        let mac = CodeMirror.keyMap.default == CodeMirror.keyMap.macDefault;
        CodeMirror.keyMap.default[(mac ? "Cmd" : "Ctrl") + "-Space"] = "autocomplete";
    }

    addElementToSelect(item, value) {
        const select = document.getElementById("optimizationLevel");
        const option = document.createElement("OPTION"),
        txt = document.createTextNode(item);
        option.appendChild(txt);
        option.setAttribute("value", value);
        select.insertBefore(option, select.lastChild);
    }
}