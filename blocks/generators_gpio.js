Blockly.JavaScript['encoder_setup'] = function (block) {
  var value_pina = Blockly.JavaScript.valueToCode(block, 'PinA', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pinb = Blockly.JavaScript.valueToCode(block, 'PinB', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `#EXTINC#include <Encoder.h>#END
  #VARIABLEBLINK encoder;#END
  encoder.begin(${value_pina}, ${value_pinb});
  \n`;
  return code;
};

Blockly.JavaScript['encoder_terminate'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'encoder.end();\n';
  return code;
};

Blockly.JavaScript['encoder_value'] = function (block) {
  // TODO: Assemble JavaScript into code variable.
  var code = 'encoder.counter';
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

