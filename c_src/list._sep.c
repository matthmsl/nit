/* This C file is generated by NIT to compile module list. */
#include "list._sep.h"
val_t list___List_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::[] (bin/../lib/standard//list.nit:21,1--22:52)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((list___List___get_node_t)CALL( self,COLOR_list___List___get_node))( self,  variable0 /*index*/) /*List::get_node*/;
  variable1 = ((abstract_collection___Container___item_t)CALL(variable1,COLOR_abstract_collection___Container___item))(variable1) /*ListNode::item*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
void list___List_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "list::List::[]= (bin/../lib/standard//list.nit:24,2--59)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((list___List___get_node_t)CALL( self,COLOR_list___List___get_node))( self,  variable0 /*index*/) /*List::get_node*/;
  ((abstract_collection___Container___item__eq_t)CALL(variable2,COLOR_abstract_collection___Container___item__eq))(variable2,  variable1 /*item*/) /*ListNode::item=*/;
  tracehead = trace.prev;
  return;
}
val_t list___List___first(val_t  self) {
  struct trace_t trace = {NULL, "list::List::first (bin/../lib/standard//list.nit:26,2--27:38)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___List____head( self) /*List::_head*/;
  variable0 = ((abstract_collection___Container___item_t)CALL(variable0,COLOR_abstract_collection___Container___item))(variable0) /*ListNode::item*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
void list___List___first__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::first= (bin/../lib/standard//list.nit:29,2--30:39)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_list___List____head( self) /*List::_head*/;
  ((abstract_collection___Container___item__eq_t)CALL(variable1,COLOR_abstract_collection___Container___item__eq))(variable1,  variable0 /*e*/) /*ListNode::item=*/;
  tracehead = trace.prev;
  return;
}
val_t list___List___last(val_t  self) {
  struct trace_t trace = {NULL, "list::List::last (bin/../lib/standard//list.nit:32,2--33:37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___List____tail( self) /*List::_tail*/;
  variable0 = ((abstract_collection___Container___item_t)CALL(variable0,COLOR_abstract_collection___Container___item))(variable0) /*ListNode::item*/;
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
void list___List___last__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::last= (bin/../lib/standard//list.nit:35,2--36:38)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
  ((abstract_collection___Container___item__eq_t)CALL(variable1,COLOR_abstract_collection___Container___item__eq))(variable1,  variable0 /*e*/) /*ListNode::item=*/;
  tracehead = trace.prev;
  return;
}
val_t list___List___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "list::List::is_empty (bin/../lib/standard//list.nit:40,2--41:44)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___List____head( self) /*List::_head*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t list___List___length(val_t  self) {
  struct trace_t trace = {NULL, "list::List::length (bin/../lib/standard//list.nit:43,2--52:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  variable2 = ATTR_list___List____head( self) /*List::_head*/;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int( TAG_Int(1))) /*l*/;
    variable2 = ((list___ListNode___next_t)CALL( variable1 /*t*/,COLOR_list___ListNode___next))( variable1 /*t*/) /*ListNode::next*/;
    variable1 = variable2 /*t=*/;
    continue_8: while(0);
  }
  break_8: while(0);
  variable0 =  variable0 /*l*/;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t list___List___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::has (bin/../lib/standard//list.nit:55,2--56:64)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_list___List____head( self) /*List::_head*/;
  variable1 = ((list___List___search_node_after_t)CALL( self,COLOR_list___List___search_node_after))( self,  variable0 /*e*/, variable1) /*List::search_node_after*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
  goto return_label9;
  return_label9: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t list___List___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::has_only (bin/../lib/standard//list.nit:58,2--65:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_list___List____head( self) /*List::_head*/;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*node*/ ==  NIT_NULL /*null*/) || (( variable1 /*node*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*node*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))( variable1 /*node*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = ((abstract_collection___Container___item_t)CALL( variable1 /*node*/,COLOR_abstract_collection___Container___item))( variable1 /*node*/) /*ListNode::item*/;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  variable0 /*e*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*e*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*e*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label10;
    }
    variable2 = ((list___ListNode___next_t)CALL( variable1 /*node*/,COLOR_list___ListNode___next))( variable1 /*node*/) /*ListNode::next*/;
    variable1 = variable2 /*node=*/;
    continue_11: while(0);
  }
  break_11: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t list___List___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::count (bin/../lib/standard//list.nit:68,2--76:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable3 = ATTR_list___List____head( self) /*List::_head*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*node*/ ==  NIT_NULL /*null*/) || (( variable2 /*node*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*node*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*node*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*node*/,COLOR_kernel___Object_____eqeq))( variable2 /*node*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((abstract_collection___Container___item_t)CALL( variable2 /*node*/,COLOR_abstract_collection___Container___item))( variable2 /*node*/) /*ListNode::item*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  variable0 /*e*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, variable0 /*e*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  variable0 /*e*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*nb*/;
    }
    variable3 = ((list___ListNode___next_t)CALL( variable2 /*node*/,COLOR_list___ListNode___next))( variable2 /*node*/) /*ListNode::next*/;
    variable2 = variable3 /*node=*/;
    continue_13: while(0);
  }
  break_13: while(0);
  variable1 =  variable1 /*nb*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t list___List___has_key(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::has_key (bin/../lib/standard//list.nit:79,2--60)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((list___List___get_node_t)CALL( self,COLOR_list___List___get_node))( self,  variable0 /*index*/) /*List::get_node*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable1;
}
void list___List___push(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::push (bin/../lib/standard//list.nit:83,2--93:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_list___ListNode___init( variable0 /*e*/); /*new ListNode[E]*/
  variable1 = variable2;
  variable2 = ATTR_list___List____tail( self) /*List::_tail*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ATTR_list___List____head( self) /*List::_head*/ =  variable1 /*node*/;
  } else { /*if*/
    variable2 = ATTR_list___List____tail( self) /*List::_tail*/;
    ((list___ListNode___next__eq_t)CALL(variable2,COLOR_list___ListNode___next__eq))(variable2,  variable1 /*node*/) /*ListNode::next=*/;
    variable2 = ATTR_list___List____tail( self) /*List::_tail*/;
    ((list___ListNode___prev__eq_t)CALL( variable1 /*node*/,COLOR_list___ListNode___prev__eq))( variable1 /*node*/, variable2) /*ListNode::prev=*/;
  }
  ATTR_list___List____tail( self) /*List::_tail*/ =  variable1 /*node*/;
  tracehead = trace.prev;
  return;
}
void list___List___unshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::unshift (bin/../lib/standard//list.nit:96,2--106:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_list___ListNode___init( variable0 /*e*/); /*new ListNode[E]*/
  variable1 = variable2;
  variable2 = ATTR_list___List____head( self) /*List::_head*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ATTR_list___List____tail( self) /*List::_tail*/ =  variable1 /*node*/;
  } else { /*if*/
    variable2 = ATTR_list___List____head( self) /*List::_head*/;
    ((list___ListNode___next__eq_t)CALL( variable1 /*node*/,COLOR_list___ListNode___next__eq))( variable1 /*node*/, variable2) /*ListNode::next=*/;
    variable2 = ATTR_list___List____head( self) /*List::_head*/;
    ((list___ListNode___prev__eq_t)CALL(variable2,COLOR_list___ListNode___prev__eq))(variable2,  variable1 /*node*/) /*ListNode::prev=*/;
  }
  ATTR_list___List____head( self) /*List::_head*/ =  variable1 /*node*/;
  tracehead = trace.prev;
  return;
}
void list___List___link(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::link (bin/../lib/standard//list.nit:109,2--121:9)"};
  val_t variable0;
  val_t variable1;
      val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_list___List____head( variable0 /*l*/) /*List::_head*/;
    ATTR_list___List____head( self) /*List::_head*/ = variable1;
  } else { /*if*/
    variable1 = ATTR_list___List____head( variable0 /*l*/) /*List::_head*/;
    variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
      variable2 = ATTR_list___List____head( variable0 /*l*/) /*List::_head*/;
      ((list___ListNode___next__eq_t)CALL(variable1,COLOR_list___ListNode___next__eq))(variable1, variable2) /*ListNode::next=*/;
      variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
      variable1 = ((list___ListNode___next_t)CALL(variable1,COLOR_list___ListNode___next))(variable1) /*ListNode::next*/;
      variable2 = ATTR_list___List____tail( self) /*List::_tail*/;
      ((list___ListNode___prev__eq_t)CALL(variable1,COLOR_list___ListNode___prev__eq))(variable1, variable2) /*ListNode::prev=*/;
    }
  }
  variable1 = ATTR_list___List____tail( variable0 /*l*/) /*List::_tail*/;
  ATTR_list___List____tail( self) /*List::_tail*/ = variable1;
  ((list___List___clear_t)CALL( variable0 /*l*/,COLOR_abstract_collection___RemovableCollection___clear))( variable0 /*l*/) /*List::clear*/;
  tracehead = trace.prev;
  return;
}
val_t list___List___pop(val_t  self) {
  struct trace_t trace = {NULL, "list::List::pop (bin/../lib/standard//list.nit:126,2--137:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
  variable0 = variable1;
  variable1 = ((list___ListNode___prev_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev))( variable0 /*node*/) /*ListNode::prev*/;
  ATTR_list___List____tail( self) /*List::_tail*/ = variable1;
  ((list___ListNode___prev__eq_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev__eq))( variable0 /*node*/,  NIT_NULL /*null*/) /*ListNode::prev=*/;
  variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    ATTR_list___List____head( self) /*List::_head*/ =  NIT_NULL /*null*/;
  } else { /*if*/
    variable1 = ATTR_list___List____tail( self) /*List::_tail*/;
    ((list___ListNode___next__eq_t)CALL(variable1,COLOR_list___ListNode___next__eq))(variable1,  NIT_NULL /*null*/) /*ListNode::next=*/;
  }
  variable1 = ((abstract_collection___Container___item_t)CALL( variable0 /*node*/,COLOR_abstract_collection___Container___item))( variable0 /*node*/) /*ListNode::item*/;
  variable0 = variable1;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t list___List___shift(val_t  self) {
  struct trace_t trace = {NULL, "list::List::shift (bin/../lib/standard//list.nit:140,2--151:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_list___List____head( self) /*List::_head*/;
  variable0 = variable1;
  variable1 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
  ATTR_list___List____head( self) /*List::_head*/ = variable1;
  ((list___ListNode___next__eq_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next__eq))( variable0 /*node*/,  NIT_NULL /*null*/) /*ListNode::next=*/;
  variable1 = ATTR_list___List____head( self) /*List::_head*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    ATTR_list___List____tail( self) /*List::_tail*/ =  NIT_NULL /*null*/;
  } else { /*if*/
    variable1 = ATTR_list___List____head( self) /*List::_head*/;
    ((list___ListNode___prev__eq_t)CALL(variable1,COLOR_list___ListNode___prev__eq))(variable1,  NIT_NULL /*null*/) /*ListNode::prev=*/;
  }
  variable1 = ((abstract_collection___Container___item_t)CALL( variable0 /*node*/,COLOR_abstract_collection___Container___item))( variable0 /*node*/) /*ListNode::item*/;
  variable0 = variable1;
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable0;
}
void list___List___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::remove (bin/../lib/standard//list.nit:154,2--157:39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_list___List____head( self) /*List::_head*/;
  variable2 = ((list___List___search_node_after_t)CALL( self,COLOR_list___List___search_node_after))( self,  variable0 /*e*/, variable2) /*List::search_node_after*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*node*/ ==  NIT_NULL /*null*/) || (( variable1 /*node*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*node*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))( variable1 /*node*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((list___List___remove_node_t)CALL( self,COLOR_list___List___remove_node))( self,  variable1 /*node*/) /*List::remove_node*/;
  }
  tracehead = trace.prev;
  return;
}
void list___List___remove_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::remove_at (bin/../lib/standard//list.nit:160,2--163:39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((list___List___get_node_t)CALL( self,COLOR_list___List___get_node))( self,  variable0 /*i*/) /*List::get_node*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*node*/ ==  NIT_NULL /*null*/) || (( variable1 /*node*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*node*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))( variable1 /*node*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((list___List___remove_node_t)CALL( self,COLOR_list___List___remove_node))( self,  variable1 /*node*/) /*List::remove_node*/;
  }
  tracehead = trace.prev;
  return;
}
void list___List___clear(val_t  self) {
  struct trace_t trace = {NULL, "list::List::clear (bin/../lib/standard//list.nit:166,2--169:14)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_list___List____head( self) /*List::_head*/ =  NIT_NULL /*null*/;
  ATTR_list___List____tail( self) /*List::_tail*/ =  NIT_NULL /*null*/;
  tracehead = trace.prev;
  return;
}
val_t list___List___iterator(val_t  self) {
  struct trace_t trace = {NULL, "list::List::iterator (bin/../lib/standard//list.nit:173,2--73)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___List____head( self) /*List::_head*/;
  variable1 = NEW_list___ListIterator___init(variable0); /*new ListIterator[E]*/
  variable0 = variable1;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable0;
}
void list___List___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "list::List::init (bin/../lib/standard//list.nit:175,2--176:5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_List].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_List].i] = 1;
  tracehead = trace.prev;
  return;
}
void list___List___from(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "list::List::from (bin/../lib/standard//list.nit:178,2--179:46)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_List].i]) return;
  ((abstract_collection___IndexedCollection___append_t)CALL( self,COLOR_abstract_collection___IndexedCollection___append))( self,  variable0 /*coll*/) /*List::append*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_List].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t list___List___get_node(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::get_node (bin/../lib/standard//list.nit:187,2--198:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_list___List____head( self) /*List::_head*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*i*/)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label26;
  }
  while (true) { /*while*/
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*n*/ ==  NIT_NULL /*null*/) || (( variable1 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*n*/,COLOR_kernel___Object_____eqeq))( variable1 /*n*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
    variable3 = variable2;
    if (UNTAG_Bool(variable3)) { /* and */
      variable3 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>UNTAG_Int( TAG_Int(0)));
    }
    variable2 = variable3;
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = ((list___ListNode___next_t)CALL( variable1 /*n*/,COLOR_list___ListNode___next))( variable1 /*n*/) /*ListNode::next*/;
    variable1 = variable2 /*n=*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_27: while(0);
  }
  break_27: while(0);
  variable1 =  variable1 /*n*/;
  goto return_label26;
  return_label26: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t list___List___search_node_after(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "list::List::search_node_after (bin/../lib/standard//list.nit:201,2--206:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  variable1 /*after*/;
  while (true) { /*while*/
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*n*/ ==  NIT_NULL /*null*/) || (( variable2 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*n*/,COLOR_kernel___Object_____eqeq))( variable2 /*n*/,  NIT_NULL /*null*/) /*ListNode::==*/)))))));
    variable4 = variable3;
    if (UNTAG_Bool(variable4)) { /* and */
      variable4 = ((abstract_collection___Container___item_t)CALL( variable2 /*n*/,COLOR_abstract_collection___Container___item))( variable2 /*n*/) /*ListNode::item*/;
      variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  variable0 /*e*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*e*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*e*/) /*Object::==*/)))))));
    }
    variable3 = variable4;
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ((list___ListNode___next_t)CALL( variable2 /*n*/,COLOR_list___ListNode___next))( variable2 /*n*/) /*ListNode::next*/;
    variable2 = variable3 /*n=*/;
    continue_29: while(0);
  }
  break_29: while(0);
  variable2 =  variable2 /*n*/;
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable2;
}
void list___List___remove_node(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::List::remove_node (bin/../lib/standard//list.nit:209,2--224:29)"};
  val_t variable0;
  val_t variable1;
      val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((list___ListNode___prev_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev))( variable0 /*node*/) /*ListNode::prev*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
    ATTR_list___List____head( self) /*List::_head*/ = variable1;
    variable1 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
    variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))));
    if (UNTAG_Bool(variable1)) { /*if*/
      ATTR_list___List____tail( self) /*List::_tail*/ =  NIT_NULL /*null*/;
    } else { /*if*/
      variable1 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
      ((list___ListNode___prev__eq_t)CALL(variable1,COLOR_list___ListNode___prev__eq))(variable1,  NIT_NULL /*null*/) /*ListNode::prev=*/;
    }
  } else { /*if*/
    variable1 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
    variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*ListNode::==*/)))));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 = ((list___ListNode___prev_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev))( variable0 /*node*/) /*ListNode::prev*/;
      ATTR_list___List____tail( self) /*List::_tail*/ = variable1;
      variable1 = ((list___ListNode___prev_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev))( variable0 /*node*/) /*ListNode::prev*/;
      ((list___ListNode___next__eq_t)CALL(variable1,COLOR_list___ListNode___next__eq))(variable1,  NIT_NULL /*null*/) /*ListNode::next=*/;
    } else { /*if*/
      variable1 = ((list___ListNode___prev_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev))( variable0 /*node*/) /*ListNode::prev*/;
      variable2 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
      ((list___ListNode___next__eq_t)CALL(variable1,COLOR_list___ListNode___next__eq))(variable1, variable2) /*ListNode::next=*/;
      variable1 = ((list___ListNode___next_t)CALL( variable0 /*node*/,COLOR_list___ListNode___next))( variable0 /*node*/) /*ListNode::next*/;
      variable2 = ((list___ListNode___prev_t)CALL( variable0 /*node*/,COLOR_list___ListNode___prev))( variable0 /*node*/) /*ListNode::prev*/;
      ((list___ListNode___prev__eq_t)CALL(variable1,COLOR_list___ListNode___prev__eq))(variable1, variable2) /*ListNode::prev=*/;
    }
  }
  tracehead = trace.prev;
  return;
}
void list___List___insert_before(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "list::List::insert_before (bin/../lib/standard//list.nit:228,2--239:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = NEW_list___ListNode___init( variable0 /*element*/); /*new ListNode[E]*/
  variable2 = variable3;
  variable4 = ((list___ListNode___prev_t)CALL( variable1 /*node*/,COLOR_list___ListNode___prev))( variable1 /*node*/) /*ListNode::prev*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*prev*/ ==  NIT_NULL /*null*/) || (( variable3 /*prev*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*prev*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*prev*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*prev*/,COLOR_kernel___Object_____eqeq))( variable3 /*prev*/,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    ATTR_list___List____head( self) /*List::_head*/ =  variable2 /*nnode*/;
  } else { /*if*/
    ((list___ListNode___next__eq_t)CALL( variable3 /*prev*/,COLOR_list___ListNode___next__eq))( variable3 /*prev*/,  variable2 /*nnode*/) /*ListNode::next=*/;
  }
  ((list___ListNode___prev__eq_t)CALL( variable2 /*nnode*/,COLOR_list___ListNode___prev__eq))( variable2 /*nnode*/,  variable3 /*prev*/) /*ListNode::prev=*/;
  ((list___ListNode___next__eq_t)CALL( variable2 /*nnode*/,COLOR_list___ListNode___next__eq))( variable2 /*nnode*/,  variable1 /*node*/) /*ListNode::next=*/;
  ((list___ListNode___prev__eq_t)CALL( variable1 /*node*/,COLOR_list___ListNode___prev__eq))( variable1 /*node*/,  variable2 /*nnode*/) /*ListNode::prev=*/;
  tracehead = trace.prev;
  return;
}
val_t list___ListIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "list::ListIterator::item (bin/../lib/standard//list.nit:246,2--37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___ListIterator____node( self) /*ListIterator::_node*/;
  variable0 = ((abstract_collection___Container___item_t)CALL(variable0,COLOR_abstract_collection___Container___item))(variable0) /*ListNode::item*/;
  goto return_label32;
  return_label32: while(false);
  tracehead = trace.prev;
  return variable0;
}
void list___ListIterator___item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::ListIterator::item= (bin/../lib/standard//list.nit:248,2--38)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_list___ListIterator____node( self) /*ListIterator::_node*/;
  ((abstract_collection___Container___item__eq_t)CALL(variable1,COLOR_abstract_collection___Container___item__eq))(variable1,  variable0 /*e*/) /*ListNode::item=*/;
  tracehead = trace.prev;
  return;
}
val_t list___ListIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "list::ListIterator::is_ok (bin/../lib/standard//list.nit:250,2--45)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___ListIterator____node( self) /*ListIterator::_node*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*ListNode::==*/)))));
  variable0 =  TAG_Bool(!UNTAG_Bool(variable0));
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable0;
}
void list___ListIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "list::ListIterator::next (bin/../lib/standard//list.nit:252,2--255:13)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_list___ListIterator____node( self) /*ListIterator::_node*/;
  variable0 = ((list___ListNode___next_t)CALL(variable0,COLOR_list___ListNode___next))(variable0) /*ListNode::next*/;
  ATTR_list___ListIterator____node( self) /*ListIterator::_node*/ = variable0;
  ATTR_list___ListIterator____index( self) /*ListIterator::_index*/ = TAG_Int(UNTAG_Int(ATTR_list___ListIterator____index( self) /*ListIterator::_index*/)+UNTAG_Int( TAG_Int(1)));
  tracehead = trace.prev;
  return;
}
void list___ListIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "list::ListIterator::init (bin/../lib/standard//list.nit:258,2--262:12)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ListIterator].i]) return;
  ATTR_list___ListIterator____node( self) /*ListIterator::_node*/ =  variable0 /*node*/;
  ATTR_list___ListIterator____index( self) /*ListIterator::_index*/ =  TAG_Int(0);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ListIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t list___ListIterator___index(val_t  self) {
  struct trace_t trace = {NULL, "list::ListIterator::index (bin/../lib/standard//list.nit:268,2--269:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_list___ListIterator____index( self) /*ListIterator::_index*/;
}
void list___ListNode___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "list::ListNode::init (bin/../lib/standard//list.nit:275,2--277:10)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ListNode].i]) return;
  ((abstract_collection___Container___item__eq_t)CALL( self,COLOR_abstract_collection___Container___item__eq))( self,  variable0 /*i*/) /*ListNode::item=*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ListNode].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t list___ListNode___next(val_t  self) {
  struct trace_t trace = {NULL, "list::ListNode::next (bin/../lib/standard//list.nit:280,2--281:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_list___ListNode____next( self) /*ListNode::_next*/;
}
void list___ListNode___next__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::ListNode::next= (bin/../lib/standard//list.nit:280,2--281:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_list___ListNode____next( self) /*ListNode::_next*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t list___ListNode___prev(val_t  self) {
  struct trace_t trace = {NULL, "list::ListNode::prev (bin/../lib/standard//list.nit:283,2--284:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_list___ListNode____prev( self) /*ListNode::_prev*/;
}
void list___ListNode___prev__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "list::ListNode::prev= (bin/../lib/standard//list.nit:283,2--284:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_list___ListNode____prev( self) /*ListNode::_prev*/ =  param0;
  tracehead = trace.prev;
  return;
}
