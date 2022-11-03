Blockly.Blocks['encoder_setupX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Setup X with Interrupt Pin A");
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

Blockly.Blocks['encoder_setupY'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Setup Y with Interrupt Pin A");
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



Blockly.Blocks['encoder_valueX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Counter X");
    this.setOutput(true, "Number");
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_valueY'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Counter Y");
    this.setOutput(true, "Number");
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};


Blockly.Blocks['encoder_terminateX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Terminate X");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_terminate Y'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Terminate Y");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};