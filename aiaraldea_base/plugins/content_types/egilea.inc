<?php

/**
 * Callback function to supply a list of content types.
 */
function aiaraldea_base_egilea_ctools_content_types() {
    return array(
        'single' => TRUE,
        'title' => t('Nodoaren egilea'),
        'icon' => 'icon_node.png',
        'description' => t('Aiaraldearen nodoen egilea.'),
        'required context' => new ctools_context_required(t('Node'), 'node'),
        'category' => t('Node'),
        'defaults' => array(
            'url_base' => 'content/',
        ),
    );
}

/**
 * Output function for the 'author pane' content type.
 */
// The function name is MODULE_NAME_CT_NAME_content_type_render
function aiaraldea_base_egilea_content_type_render($subtype, $conf, $panel_args, $context) {
    if (empty($context) || empty($context->data)) {
        return;
    }

    // Get a shortcut to the node.
    $node = $context->data;

    if (empty($node->uid)) {
        return;
    }

    $nodeUser->uid = $node->uid;
    profile_load_profile($nodeUser);
    print $nodeUser->profile_izen_abizenak;



    $formatted_author = '<span id="nodo_egilea">';
    $formatted_author .= $nodeUser->profile_izen_abizenak;
    $formatted_author .= '</span>';

    // Build the content type block.
    $block = new stdClass();
    $block->module = 'aiaraldea_base';
    $block->delta = $node->nid;
    $block->title = $type->title_label;
    $block->content = $formatted_author;
    return $block;
}

/**
 * Returns an edit form for node terms display settings.
 *
 * The first question is if they want to display all terms or restrict it to a
 * specific taxonomy vocabulary.
 *
 * Then, they're presented with a set of radios to find out how they want the
 * terms formatted, which can be either be via theme('links'), a regular item
 * list (ul), or inline with a delimiter.  Depending on which radio they
 * choose, some other settings might appear. If they're doing either the ul or
 * inline, we ask if they want the terms to appear as links or not. If they
 * want it inline, we ask what delimiter they want to use.
 */
function aiaraldea_base_egilea_content_type_edit_form(&$form, &$form_state) {
    ctools_include('dependent');

    $conf = $form_state['conf'];
}

/**
 * Submit handler for the custom type settings form.
 */
function aiaraldea_base_egilea_content_type_edit_form_submit(&$form, &$form_state) {
    // Copy everything from our defaults.
    foreach (array_keys($form_state['plugin']['defaults']) as $key) {
        $form_state['conf'][$key] = $form_state['values'][$key];
    }
}

function aiaraldea_base_egilea_content_type_admin_title($subtype, $conf, $context) {
    return t('Nodoaren egilea');
}