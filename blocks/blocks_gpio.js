Blockly.Blocks['encoder_setupX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder X Setup with Interrupt Pin");
    this.appendValueInput("PinA")
      .setCheck("Number");
    this.appendDummyInput()
      .appendField("and Interrupt Pin");
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

Blockly.Blocks['encoder_single_setupX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder X Setup with Interrupt Pin");
    this.appendValueInput("PinA")
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
      .appendField("Encoder Y Setup with Interrupt Pin");
    this.appendValueInput("PinA")
      .setCheck("Number");
    this.appendDummyInput()
      .appendField("and Interrupt Pin");
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

Blockly.Blocks['encoder_single_setupY'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Y Setup with Interrupt Pin");
    this.appendValueInput("PinA")
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
      .appendField("Encoder X Counter Value");
    this.setOutput(true, "Number");
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_valueY'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Y Counter Value");
    this.setOutput(true, "Number");
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_clearX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder X Reset");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_clearY'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Y Reset");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};


Blockly.Blocks['encoder_terminateX'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder X Terminate");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['encoder_terminateY'] = {
  init: function () {
    this.appendDummyInput()
      .appendField("Encoder Y Terminate");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(330);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};