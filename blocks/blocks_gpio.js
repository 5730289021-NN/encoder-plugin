Blockly.Blocks['encoder_setup'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Setup with Interrupt Pin A");
    this.appendValueInput("PinA")
      .setCheck("Number");
    this.appendDummyInput()
      .appendField("and Interrupt Pin B");
    this.appendValueInput("PinB")
      .setCheck("Number");
    this.appendDummyInput();
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};



Blockly.Blocks['encoder_value'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Counter");
    this.setOutput(true, "Number");
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_terminate'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Terminate");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};